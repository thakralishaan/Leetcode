class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if(strs.size()==0){
            return 0;
        }
        string prefix =strs[0];  //taking first element as prefix and then decrement if element not found decrease length
        for(int i=1;i<strs.size();i++){
            
            while(strs[i].find(prefix)!=0){
                prefix= prefix.substr(0, prefix.length()-1);
            }
                
            }
        return prefix;
        }
        
};
class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        int i=0;
        int j=0;
        int n=w1.size();
        int m=w2.size();
        string res="";

            while(i<n && j<m){
                res.push_back(w1[i++]);
                res.push_back(w2[j++]);
                
                
            }
            
            while(i<n){
                res.push_back(w1[i++]);      //remaining portion of array if not of same size
            }
            while(j<m){
                res.push_back(w2[j++]);
            }
            return res;
        }

    
};
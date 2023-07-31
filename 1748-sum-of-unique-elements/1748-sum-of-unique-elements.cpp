class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>mp;
        int sum=0;
        for( auto n: nums){
            mp[n]++;
            
        }
        
        for(auto m:mp){
            
            if(m.second==1){
                sum+= m.first;
            }
        }
        return sum;
    }
};
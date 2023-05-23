class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> hset;
        for (int i=0;i<nums.size();i++){
            
            if(hset.count(nums[i]))
                return true;
            hset.insert(nums[i]);
        }
        return false;
    }
};  

// class Solution{
// public:
//     bool containsDuplicate(vector<int>&nums){
        
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<nums.size();i++){
            
//             if(nums[i]==nums[i+1]){
//                 return  true;
//             }
//         }
//         return false;
//         }
// };
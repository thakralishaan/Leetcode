class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //Approach 1  in nlogn
//         int n=nums.size()-1;
        
//         sort(nums.begin(), nums.end());
        
//         for(int i=0;i<n;i++){
            
//             if(nums[i]==nums[i+1]){
                
//                 return nums[i];
//             }
            
//         }
//         return -1;
        
        //Approach 2in O(n) using negative marking on visited basis
        int ans=-1;
        
        for(int i=0;i<nums.size();i++){
            
            int index= abs(nums[i]);


            // if already visited then

            if(nums[index]<0){ 
                return index;
            }

            nums[index] *= -1;
        }
        return ans;
    }
};
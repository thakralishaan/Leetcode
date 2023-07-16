class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int mini=INT_MAX;
        int sum=0;
        int i=0;
        int j= 0;
        while(j<nums.size()){
            sum=sum+nums[j];
            
            while(sum>=target){
                
                mini= min(mini,j-i+1);
                sum=sum-nums[i];
                i++;
                
            }
            j++;
        }
        return (mini != INT_MAX) ? mini : 0;
    }
    
};
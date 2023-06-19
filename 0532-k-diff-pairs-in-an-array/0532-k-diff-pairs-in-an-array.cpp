class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        set<pair<int,int>> ans;   //taking a set as we get distinct elements with no repetition taking a pair of values
        int i=0;
        int j=1;
        
        while(j<nums.size()){
            
            int diff= nums[j]-nums[i];  //abs not required as sorted and j will be greater or equal to i
            
            if(diff==k){
                ans.insert({nums[i],nums[j]});
                i++;
                j++;
            }
            else if(diff>k){    // as window is large need to decrease its size so we movw forward from left as to find larger number as sorted
                i++;                //[1,1,2,4] -> 4-1> 4-2 i++
            }
            else{
                
                j++;
            }
            if(i==j){           //this helps remove duplicate index as it cannot form a pair with same value move forward
                j++;
            }
        }
        return ans.size();
    }
};
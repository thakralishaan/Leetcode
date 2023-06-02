class Solution {
public:
    void sortColors(vector<int>& nums) {
        //First -> use sort function but it is not in place solution with TC -> nlogn and Sc-. 0n
        //Second -> use counting and spreading method where we intialize all 3 characters then use for and while loop to iterate and get all numbers
        // for second we get TC 0n and SC= 0(1)
        // 3pointer approach best solution using of 3 pointers low mid and high
        
        int low=0; 
        int mid=0;
        int high = nums.size()-1;
        while(mid<=high){      //important condition here we have 3 elements so we take mid<high and not low and high
        if(nums[mid]==0){
            swap(nums[low],nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid]==1){
            
            mid++;
        }
        
        else{
            // for 2
            swap(nums[mid], nums[high]);
            high--;
        }
    }
        
    }
};
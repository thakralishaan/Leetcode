#include <vector>

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        
        int left = 0;
        int right = 1;
        int count = 1;
        
        while (right < nums.size()) {
            if (nums[left] != nums[right]) {
                left++;
                nums[left] = nums[right];
                count++;
            }
            right++;
        }
        
        return count;
    }
};

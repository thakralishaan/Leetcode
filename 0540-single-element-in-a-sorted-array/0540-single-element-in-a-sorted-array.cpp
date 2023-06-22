class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (mid % 2 == 1) {
                // If mid is odd, adjust it to make it even
                mid--;
            }

            if (nums[mid] == nums[mid + 1]) {
                // The non-duplicate element is on the right side
                low = mid + 2;
            } else {
                // The non-duplicate element is on the left side
                high = mid;
            }
        }

        return nums[low];
    }
};

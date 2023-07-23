class Solution {
public:
    int mostFrequentEven(std::vector<int>& nums) {
        int maxCount = 0;
        std::map<int, int> mp;
        int freqElement = -1; // Initialize to -1 to handle cases when there are no even elements.

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                mp[nums[i]]++;

                if (maxCount < mp[nums[i]]) {
                    maxCount = mp[nums[i]];
                    freqElement = nums[i];
                }
                else if (maxCount == mp[nums[i]] && nums[i] < freqElement) {
                    freqElement = nums[i];
                }
            }
        }

        return freqElement;
    }
};
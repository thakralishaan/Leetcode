#include <vector>
#include <unordered_set>

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> win;
        
        int left = 0;
        int right = 0;
        
        for (; right < nums.size(); right++) {
            
            if (right - left > k) {
                win.erase(nums[left]);
                left++;
            }
            
            if (win.count(nums[right]) > 0) {
                return true;
            }
            
            win.insert(nums[right]);
        }
        
        return false;
    }
};

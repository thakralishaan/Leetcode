    class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int>ans;
        
        sort(potions.begin(), potions.end());
        
        for (int i = 0; i < spells.size(); i++) {

            int l = 0, h = potions.size()-1, successStartIdx = potions.size();
            while (l <= h) {
                
                int mid = l + (h-l)/2;
                long long curr = (long long)spells[i] * potions[mid];
                // cout << potions[mid] << " "; 
                
                if (curr >= success) {
                    successStartIdx = mid;
                    h = mid - 1;
                }
                else {
                    l = mid + 1;
                }
            }
            ans.push_back(potions.size() - successStartIdx);

        }
        
        return ans;
    }
};

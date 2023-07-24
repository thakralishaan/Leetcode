class Solution {
public:
int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> mp; // Create an unordered map to store cumulative sums and their frequencies.
    int sum = 0; // Initialize a variable to keep track of the cumulative sum.
    int ans = 0; // Initialize a variable to store the count of subarrays whose sum equals k.
    mp[sum] = 1; // Initialize the map with an entry for sum = 0.

    for (auto it : nums) { // Iterate through each element in the input vector nums.
        sum += it; // Add the current element to the cumulative sum.

        int find = sum - k; // Calculate the value that should be present in the map to achieve the target sum k.

        if (mp.find(find) != mp.end()) {
            ans += mp[find]; // If such a value exists in the map, add its frequency to the answer count.
        }

        mp[sum]++; // Update the map by incrementing the frequency of the current cumulative sum.
    }

    return ans; // Return the count of subarrays whose sum equals k.
}
    

};
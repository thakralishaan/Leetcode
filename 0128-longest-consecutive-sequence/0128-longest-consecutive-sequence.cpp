class Solution {
public:
    int longestConsecutive(vector<int>& a) {
//         unordered_set<int> numset(nums.begin(), nums.end());
//         int longest = 0;
        
//         for (int n : nums) {
//             if (numset.find(n - 1) == numset.end()) {
//                 int length = 1;
                
//                 while (numset.find(n + length) != numset.end()) {
//                     length++;
//                 }
                
//                 longest = max(longest, length);
//             }
//         }
        
//         return longest;
        
    int n = a.size();
    if (n == 0) return 0;

    //sort the array:
    sort(a.begin(), a.end());
    int lastSmaller = INT_MIN;
    int cnt = 0;
    int longest = 1;

    //find longest sequence:
    for (int i = 0; i < n; i++) {
        if (a[i] - 1 == lastSmaller) {
            //a[i] is the next element of the
            //current sequence.
            cnt += 1;
            lastSmaller = a[i];
        }
        else if (a[i] != lastSmaller) {
            cnt = 1;
            lastSmaller = a[i];
        }
        longest = max(longest, cnt);
    }
    return longest;

}
};

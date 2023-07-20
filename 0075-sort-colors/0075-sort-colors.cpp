class Solution {
public:
    void sortColors(vector<int>& arr) {
//         //First -> use sort function but it is not in place solution with TC -> nlogn and Sc-. 0n
        
// //         sort(nums.begin(),nums.end());
        
//         //Second -> use counting and spreading method where we intialize all 3 characters then use for and while loop to iterate and get all numbers
//         // for second we get TC 0n and SC= 0(1)
        
        
//         // Third -> 3 pointer approach best solution using of 3 pointers low mid and high
    
// void sortColors(vector<int>& nums) {
//     int n = nums.size();
//     int c0 = 0;
//     int c1 = 0;
//     int c2 = 0;

//     // Count the occurrences of 0s, 1s, and 2s
//     for (int i = 0; i < n; i++) {
//         if (nums[i] == 0) {
//             c0++;
//         } else if (nums[i] == 1) {
//             c1++;
//         } else {
//             c2++;
//         }
//     }

//     // Assign the elements in the correct order
//     for (int i = 0; i < c0; i++) {
//         nums[i] = 0;
//     }
//     for (int i = c0; i < c0 + c1; i++) {
//         nums[i] = 1;
//     }
//     for (int i = c0 + c1; i < n; i++) {
//         nums[i] = 2;
//     }
// }
    int n = arr.size();
    int low = 0, mid = 0, high = n - 1; // 3 pointers

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
};
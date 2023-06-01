// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
// //         int n=nums.size();
        
// //         for(int i=0;i<n;i++){
            
// //             nums[i]=(nums[i]*nums[i]);
            
// //         }
        
// //         sort(nums.begin(),nums.end());
// //         return nums;
// //     }
// // };
        
  

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        
        int left = 0;  // pointer for the leftmost negative number
        int right = n - 1;  // pointer for the rightmost positive number
        int index = n - 1;  // index to fill the result vector
        
        while (left <= right) {
            int leftSquare = nums[left] * nums[left];
            int rightSquare = nums[right] * nums[right];
            
            if (leftSquare > rightSquare) {
                result[index] = leftSquare;
                left++;
            } else {
                result[index] = rightSquare;
                right--;
            }
            
            index--;
        }
        
        return result;
    }
};


/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */
class Solution {
public:
    int guessNumber(int n) {
        int low = 1;
        int high = n;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int ans = guess(mid);

            if (ans == 0) {
                return mid;  // Correct guess found, return mid
            } else if (ans == 1) {
                low = mid + 1;  // Guess is higher, search in the right half
            } else {
                high = mid - 1;  // Guess is lower, search in the left half
            }
        }

        return -1;  // Return -1 if the number is not found
    }
};

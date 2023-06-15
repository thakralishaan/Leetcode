class Solution {
public:
    int arrangeCoins(int n) {
        long long low = 1;
        long long high = n;
        long long res = 0;
        
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long coins = (mid * (mid + 1)) / 2;    //Gaussian formula to use sum of extreme pairs is always same 
            
            if (coins > n) {
                high = mid - 1;                      //if coins are more than the rows created
            } else {
                low = mid + 1;
                res = mid;
            }
        }
        
        return res;
    }
};


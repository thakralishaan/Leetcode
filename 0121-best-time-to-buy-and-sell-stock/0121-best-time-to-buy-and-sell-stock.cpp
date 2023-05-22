class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int left=0;
        int right=1;
        int profit=0;
        int maxP=0;
        
        for(;right<prices.size();right++){
            if(prices[left]<prices[right]){
                profit=prices[right]-prices[left];
                maxP= max(maxP,profit);
            }
            else{
                left=right;
            }
        }
        return maxP;
        
    }
};
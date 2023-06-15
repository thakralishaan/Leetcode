class Solution {
public:
    bool isPerfectSquare(long long int num) {
        for(long long int i=0;i<=num;i++){
            
            if(i*i==num ){
                
                return true;
            }
        }
        return false;
    }
};
// class Solution {
// public:
//     bool isPerfectSquare(long long int num) {
//         for(long long int i=0;i<=num;i++){
            
//             if(i*i==num ){
                
//                 return true;
//             }
//         }
//         return false;
//     }
// };
//BRUTE FORCE APPROACH --> O(ROOT N)   
//WHERE WE JUST CHECK IF EACH ITERATION SQUARE IS EQUAL TO NUM IF NOT THEN FALSE
//ALWAYS CHANGE DATA TYPE TO LONG LONG WHEN WE HAVE RUNTIME ERROR

//SECOND APPROACH  --> USE BIANRY SEARCH --> O(LOGN)
class Solution{
    public:
        bool isPerfectSquare(long long int num){
            
            long long int left=1;
            long long int right=num;
            
            while(left<=right){
                
                long long int mid = left+(right-left)/2;
                
                if(mid*mid>num){
                    right=mid-1;
                }
                else if(mid*mid<num){
                    left=mid+1;
                }
                else{
                    return true;
                }
            }
            return false;
        }
};



class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         for(int i=0;i<matrix.size();i++){
//             for(int j=0;j<matrix[0].size();j++){
                
//                 if(matrix[i][j]==target){
//                     return true;
//                 }
                
//             }
//         }
//         return false;        //BRUTE FORCE
        
        
        int n=matrix.size();
        int m=matrix[0].size();
        
        if(m==0 || n==0){
            return false;                //base case important when size of matrix 
        }
        int  l=0;
        int r= m*n-1;
        while(l<=r){
            int mid= l+ (r-l)/2;
            int ind= matrix[mid/m][mid%m];
            
            if(ind==target){
                return true;
            }
            else if( ind> target){
                
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return false;
    }
};
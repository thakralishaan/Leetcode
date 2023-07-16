class Solution {
public:
    int findMin(vector<int>& arr) {
        int l=0;
        int r=arr.size()-1;
        
        int ans=INT_MAX;   //store min value so int max
        
        while(l<=r){
            
            int mid= l+(r-l)/2;
            
            if(arr[l]<=arr[mid]){
                //means sorted part of array move right and store the mid value
                ans=min(ans,arr[l]);
                l=mid+1;
            }
            else{
                r=mid-1;
                ans= min(ans,arr[mid]);
            }
        }
        return ans;
    }
};
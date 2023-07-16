class Solution {
public:
    int search(vector<int>& arr, int target) {
        int l=0;
        int r=arr.size()-1;
        
        while(l<=r){
            int mid= l+ (r-l)/2;
            if(arr[mid]==target){
                return mid;
            }
            
            if(arr[l]<=arr[mid]){    //means left sorted and right unsorted
                
                if(arr[l]<=target && target <=arr[mid]){         // to check if target is within the given sorted range
                     r=mid-1;
                }
                else{
                    l=mid+1;
                }
                
            }
            else{                       //means right sorted and left is unsorted
                if(arr[mid] <=target && target<=arr[r]){        //checks if target in range in right array
                    l=mid+1;
                        
                }
                else{
                    r=mid-1;
                }
            }
        }
        return -1;
    }
};
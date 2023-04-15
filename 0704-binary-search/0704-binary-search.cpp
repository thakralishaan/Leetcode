class Solution {
public:
    int search(vector<int>& arr, int target) {
        int start=0;
        int end= arr.size()-1;
        
        while(start<end){
            int mid= start + (end-start)/2;
            
            if(arr[mid]>=target){
                
                end=mid;
            }
            
            else{
                
                start= mid+1;
            }
        }
        if(arr[start]!=target)
            return -1;
        return start;
    }
};
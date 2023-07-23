class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int element=0;
        
        for(int i=0;i<nums.size();i++){
            if(count==0){
                element=nums[i];
            }
            
            if(nums[i]==element){ 
                count+=1;
            }
            else{
                count-=1;
            }
        }
        
        return element;
        }
        
    //     map<int,int>mp;                          //seconf best using hashing but due to extra space 
    //     for(int i=0;i<nums.size();i++){
    //         mp[nums[i]]++;
    //     }
    //     for(auto it:mp){
    //         if(it.second> nums.size()/2){
    //             return it.first;
    //         }
    //     }
    //     return -1;
    // }
};
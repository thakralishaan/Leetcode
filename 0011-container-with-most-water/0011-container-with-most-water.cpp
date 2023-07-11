class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        int l=0;
        int r=height.size()-1;
        
        while(l<r){
            
            int area=(r-l)*min(height[l],height[r]);
            ans= max(ans,area);
            
            if(height[l]<height[r]){
                l++;
            }
            else if(height[l]>height[r]){          // last 2 statements can be combined together
                r--;
            }
            else{
                r--;
            }
            
        }
        return ans;
    }
};
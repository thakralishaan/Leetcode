class Solution {
public:
    int mySqrt(int x) {
        int s=1;
        int e=x;
        int mid=s+(e-s)/2;
        int ans=-1;
        while(s<=e)
        {
            if(x==0)
            {
                return x;
            }
            if(mid>x/mid)
                e=mid-1;
            else
            {
                //store the ans
                ans=mid;
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return e;
    }
   
};
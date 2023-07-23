class Solution {
public:
    double myPow(double x, int n) {
        int p= abs(n);
        double res=1.0;
        while(p>0){
            if(p%2==1){                  // we can use bitwise operator as well than modulo
                res= res* x;
            }
            x=x*x;
            p=p/2;
        }
        return n<0 ? 1/res : res;
    }
};
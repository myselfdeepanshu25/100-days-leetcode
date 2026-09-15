class Solution {
public:
    double myPow(double x, int n) {
        if(n==0)return 1.0;
        if(x==0)return 0.0;
        if(x==1)return 1.0;
        if(x==-1 && n%2==0)return 1.0;
        if(x==-1 && n%2==0)return -1.0;

        long bitform=n;
        if(n<0){
            x=1/x;
            bitform=-bitform;
        }
        double ans=1.0;
        while(bitform>0){
            if(bitform%2==1){
                ans*=x;

            }
            x*=x;
            bitform/=2;
        }
        return ans;

        
    }
};
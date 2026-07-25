class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        long long int p=n;
        if (x==1)   return ans;
        if (x==-1){
            if (p%2==0) return ans;
            else    return -ans;
        }
        if (x==0)   return 0;
        int flag=0;
        if (p<0){
            flag=1;
            p=-p;
        }
        while (p> 0) {
            if (p% 2 == 0) {
                x *= x;
                p/=2;
            } else {
                ans*= x;
                p--;
            }
        }
        if(flag){
            return 1/ans;
        }
        return ans;
    }
};

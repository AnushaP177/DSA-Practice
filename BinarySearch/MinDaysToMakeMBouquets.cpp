class Solution {
public:
    int minDays(vector<int>& bd, int m, int k) {
        long long val=m*1LL*k*1LL;
        if (val > bd.size())    return -1;
        int low=bd[0], high=bd[0];
        for(int i=1; i<bd.size(); i++){
            low=min(low, bd[i]);
            high=max(high, bd[i]);
        }
        if (val==bd.size()) return high;
        int res=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            int cnt=0,bq=0;
            for(int i=0; i<bd.size(); i++){
                if (mid>=bd[i])   cnt++;
                else{
                    bq+=cnt/k;
                    cnt=0;
                }
            }
            bq+=cnt/k;
            if (bq>=m){
                high=mid-1;
                res=mid;
            }
            else    low=mid+1;
        }
        return res;
    }
};

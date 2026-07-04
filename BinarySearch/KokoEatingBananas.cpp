class Solution {
public:
    long long int ttime(vector<int>piles, int k){
        long long int sum=0;
        for(int i=0; i<piles.size(); i++){
            if (piles[i]%k==0)  sum+=piles[i]/k;
            else    sum+=piles[i]/k +1;
        }
        return sum;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        sort(piles.begin(), piles.end());
        int high=piles[piles.size()-1];
        int ans=high;
        while(low<=high){
            int mid= low+(high-low)/2;
            if (ttime(piles, mid) <= h){
                ans=mid;
                high=mid-1;
            }
            else    low=mid+1;
        }
        return ans;
    }
};

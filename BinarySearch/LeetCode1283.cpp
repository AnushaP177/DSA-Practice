class Solution {
public:
    int sum(vector<int>& nums, int th, int div){
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i]/div + min(1, nums[i]%div);
            if (sum>th)   return 0;
        }
        return 1;
    }

    int smallestDivisor(vector<int>& nums, int th) {
        sort(nums.begin(), nums.end());
        int low=1;
        int high=nums[nums.size()-1];
        int ans;
        while(low<=high){
            int mid=low + (high-low)/2;
            if (sum(nums, th, mid)){
                ans=mid;
                high=mid-1;
            }
            else    low=mid+1;
        }
        return ans;
    }
};

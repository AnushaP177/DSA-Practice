//missing number in array from [0,n]

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        if (nums[0]==1)   return 0;
        else if (nums[n-1]==n-1)    return n;
        int low=0;
        int high=n-1;
        while(low<high){
            int mid=(low+high)/2;
            if (nums[mid]==mid)  low=mid+1;
            else    high=mid;  
        }
        return low;
    }
};

//the value should decrease only once in whole circle so we need to check for end values decrease too i.e. a[n-1]>a[0]

bool check(vector<int>& nums) {
        int cnt=0;
        int n=nums.size();
        for(int i=1; i<n; i++){
            if (nums[i]<nums[i-1])   cnt++;
            if (cnt>1)   break;
        } 
        if (nums[n-1]>nums[0])  cnt++;
        if (cnt>1)   return false;
        return true;
}

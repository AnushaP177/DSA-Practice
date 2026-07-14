class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int tot_xor=0;
        int n=nums.size();
        for(int i=0; i< n; i++){
            tot_xor^=nums[i];
            tot_xor^=(i+1);
        }
        int diff=tot_xor & -tot_xor;
        int x=0, y=0;
        for(int num: nums){
            if (num & diff)  x^=num;
            else    y^=num;
        }
        for(int i=1; i<=n; i++){
            if (i & diff)   x^=i;
            else    y^=i;
        }
        vector<int>ans;
        for(int num: nums){
            if(num==x){
                ans.push_back(x);
                ans.push_back(y);
                break;
            }  
        }
        if (ans.size()==0){
            ans.push_back(y);
            ans.push_back(x);
        }
        return ans;
    }

};

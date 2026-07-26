class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long int xort=0;
        for(int i=0; i<nums.size(); i++){
            xort^=nums[i];
        }
        xort&=-xort;
        vector<int>res={0,0};
        for(int num: nums){
            if ((num&xort)==0)    res[0]^=num;    //bracket needed due to priority
            else    res[1]^=num;
        }
        return res;
    }
};

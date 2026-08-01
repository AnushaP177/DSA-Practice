//Leetcode 3158
class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        int xort=0;
        for(auto i: mp){
            if (i.second==2)    xort^=i.first;
        }
        return xort;
    }
};

//since len<50 we can use 64 bit LL as hashmap

class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int bt=0;
        int xort=0;
        for(int num: nums){
            // check if num th place is 1
            if ((bt >> num) & 1)  xort^=num;
            // shift 000000.....1 num places to left to get to 
            else    bt|=(1LL << num);
        }
        return xort;
    }
};

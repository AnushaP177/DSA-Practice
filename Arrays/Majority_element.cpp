//(>(n/2) case
#include<bits/stdc++.h>
using namespace std;    

int majorityElement(vector<int>& nums) {
    int count=0;
    int elm=0;
    for(int i=0; i<nums.size(); i++){
        if (count==0){
            elm=nums[i];
        }
        else if (nums[i]!=elm){
            count--;
        }
        else{
            count++;
        }
    }
    for(int i=0; i<nums.size(); i++){
        if(nums[i]==elm){
            count++;
        }
    }
    if (count>nums.size()/2){
        return elm;
    }
    return -1; // No majority element found
}

int main(){
    vector<int> nums={2,2,1,1,1,2,2};
    cout<<majorityElement(nums);
}

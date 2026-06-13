#include<bits/stdc++.h>
using namespace std;

int better_longest(vector<int>& nums){
    int n=nums.size();
    int count=1,maxi=0;
    int cur=nums[0];
    sort(nums.begin(),nums.end());
    if (n==1)
        return 1;
    for(int i=1; i<n; i++){
        if(nums[i]==cur+1){
            count++;
            cur=nums[i];
        }
        else{
            maxi=max(maxi,count);
            count=0;
            cur=nums[i];
        }
    }
    maxi=max(maxi,count); // for the last sequence
    return maxi;
}

int optimal_longest(vector<int>& nums){
    int n=nums.size();
    unordered_set<int> s(nums.begin(),nums.end());
    int maxi=0;
    for(int i=0; i<n; i++){
        if(s.find(nums[i]-1)==s.end()){
            int count=1;
            int cur=nums[i];
            while(s.find(cur+1)!=s.end()){
                count++;
                cur++;
            }
            maxi=max(maxi,count);
        }
    }
    return maxi;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<optimal_longest(a)<<endl;
    }
    return 0;
}

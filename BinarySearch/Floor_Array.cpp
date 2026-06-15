#include<bits/stdc++.h>
using namespace std;

int floor(vector<int>&arr, int x){
    int low=0;
    int high=arr.size()-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if (arr[mid]<=x){
            ans=arr[mid];
            low=mid+1;
        }
        else
            high=mid-1;
    }
    return ans;
}

int main(){
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<floor(a, x);
}

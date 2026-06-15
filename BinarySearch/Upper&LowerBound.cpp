#include<bits/stdc++.h>
using namespace std;

//lb_index = lower_bound(arr.begin(),arr.end(),end) - arr.begin()

int lowerbound(vector<int> &arr, int num){
    int low=0;
    int high=arr.size();
    int ans=arr.size();
    while(low<=high){
        int mid=low + (high-low)/2 ;
        if (arr[mid]>=num){
            ans=mid;
            high=mid-1;
        }
        else    
            low=mid+1;
    }
    return ans;
}

int upperbound(vector<int> &arr, int num){
    int low=0;
    int high=arr.size();
    int ans=arr.size();
    while(low<=high){
        int mid=low + (high-low)/2 ;
        if (arr[mid]>num){
            ans=mid;
            high=mid-1;
        }
        else    
            low=mid+1;
    }
    return ans;
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<lowerbound(a, k)<<endl;
    cout<<upperbound(a, k);
}

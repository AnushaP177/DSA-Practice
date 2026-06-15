#include<bits/stdc++.h>
using namespace std;

int bs(vector<int> &arr, int low, int high,int target){
    if (low>high)   return -1;
    int mid=low+(high-low)/2;
    if (arr[mid]==target)   return mid;
    else if (arr[mid] >target)   return bs(arr, low, mid-1, target);
    else    return bs(arr,mid+1, high, target);
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<bs(a,0,n-1,k);
}

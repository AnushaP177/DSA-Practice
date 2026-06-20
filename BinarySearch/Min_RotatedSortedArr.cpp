#include<bits/stdc++.h>
using namespace std;

int min_sorted(vector<int>a){
    int mini=INT_MAX;
    int low=0;
    int high=a.size()-1;
    while(low<=high){
        int mid=(low+high)/2;
        //left sorted
        if (a[low]<=a[mid]){
            mini=min(mini,a[low]);
            low=mid+1;
        }
        else{
            mini=min(mini,a[mid]);
            high=mid-1;
        }
    }
    return mini;
}
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<min_sorted(a);
}

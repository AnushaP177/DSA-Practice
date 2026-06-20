//same logic as finding minimum
#include<bits/stdc++.h>
using namespace std;

int min_sorted(vector<int>a){
    int mini=INT_MAX;
    int ind=-1;
    int low=0;
    int high=a.size()-1;
    while(low<=high){
        int mid=(low+high)/2;
        //left sorted
        if (a[low]<=a[mid]){
            if (a[low]<mini)    ind=low;
            mini=min(mini, a[low]); 
            low=mid+1;
        }
        else{
            if (a[mid] < mini)   ind=mid;
            mini=min(mini,a[mid]);
            high=mid-1;
        }
    }
    return ind;
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

//non unique elements

#include<bits/stdc++.h>
using namespace std;

bool search_sorted(vector<int> &a, int num){
    int low=0;
    int high=a.size()-1;
    while(low<=high){
        int mid=(low+high)/2;
        if (a[mid]==num)   return true;
        //case where we can't tell which part is sorted
        if (a[low]==a[mid] && a[mid]==a[high]){
            low=low+1;
            high=high-1;
            continue;
        }
        // right sorted
        if (a[mid]<=a[high]) {
            if (a[mid]<num && num<=a[high])  low=mid+1;
            else   high=mid-1; 
        } 
        //left sorted
        else if (a[low]<=a[mid]){
            if (a[low]<=num && num<a[mid])   high=mid-1;
            else low=mid+1;
        }
    }
    return -1;
}

int main(){
  int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<search_sorted(a, k);
}

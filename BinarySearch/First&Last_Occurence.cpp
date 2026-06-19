#include<bits/stdc++.h>
using namespace std;

int first_occur(vector<int> &a, int num){
    int low=0;
    int high= a.size()-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if (a[mid]>=num){
            if (a[mid]==num)    ans=mid;
            high=mid-1;
        }
        else
            low=mid+1;
    }
    return ans;
}

int last_occur(vector<int> &a, int num){
    int low=0;
    int high= a.size()-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if (a[mid]<=num){
            if (a[mid]==num)    ans=mid;
            low=mid+1;
        }
        else
            high=mid-1;
    }
    return ans;
}

int main(){
    int n,k;
    cin>>n>>k;
    vector <int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<first_occur(a, k)<<" ";
    cout<<last_occur(a,k);

}

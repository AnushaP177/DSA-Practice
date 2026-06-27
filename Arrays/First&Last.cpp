//You can right rotate it any number of times (possibly, zero). What is the maximum value of A1 + AN you can get?
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int maxi=a[0]+a[n-1];
        for(int i=0; i<n-1; i++){
            int sum=a[i]+a[i+1];
            maxi=max(maxi,sum);
        }
        cout<<maxi<<endl;
    }
}

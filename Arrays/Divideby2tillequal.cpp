//Minimumbye no of operations to make equal
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        map<int,int>hash;
        int res=0;
        for(int i=0; i<n; i++){
            int x=a[i];
            while(x){
                hash[x]++;
                x=x/2;
            }
        }
        for(auto it: hash){
            if (it.second==n)   res=it.first;
        }
        int cnt=0;
        for(int i=0; i<n; i++){
            int x=a[i];
            while(x!=res){
                cnt++;
                x=x/2;
            }
        }
        cout<<cnt<<endl;
    }
}

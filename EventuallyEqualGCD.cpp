//three positive integers; make them equal by 2 types of operation - either gcd(a,c) and gcd(b,c) or by c+1

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long int a,b,c;
        cin>>a>>b>>c;
        if (a==b) 
            cout<<0<<endl;
        else if (gcd(a,c)==gcd(b,c))    cout<<1<<endl;
        else if (gcd(a,c+1)==gcd(b,c+1))    cout<<2<<endl;
        else    cout<<3<<endl;
    }
}

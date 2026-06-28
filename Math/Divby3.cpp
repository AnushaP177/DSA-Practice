// He has two non-negative integers A and B. In one operation, Stack can do either of the following:
// A:=∣A−B∣ (change)
// B:=∣A−B∣ (change)
// Find the minimum number of operations after which at least one integer out of A and B becomes divisible by 3.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if (a%3==0 || b%3==0)   cout<<0<<endl;
        else if (abs(a-b)%3==0)   cout<<1<<endl;
        else    cout<<2<<endl;
    }
}

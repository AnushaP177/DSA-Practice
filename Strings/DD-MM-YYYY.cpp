#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int f=(s[0]-'0')*10+(s[1]-'0');
	      int p=(s[3]-'0')*10+(s[4]-'0');
        if (f>12)   cout<<"DD/MM/YYYY\n";
        else if (p>12)    cout<<"MM/DD/YYYY\n";
        else    cout<<"both\n";
    }

}

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ans;
        ans.push_back(1);
        int carry=0;
        int mul;
        for(int i=2; i<=n; i++){
            for(int j=0; j<ans.size(); j++){
                mul=ans[j]*i+carry;
                ans[j]=mul%10;
                carry=mul/10;
            }
            while(carry){
                ans.push_back(carry%10);
                carry=carry/10;
            }
        }
        reverse(ans.begin(),ans.end());
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i];
        }
        cout<<endl;
    }
}

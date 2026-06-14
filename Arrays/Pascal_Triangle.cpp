#include<bits/stdc++.h>
using namespace std;

int type1_ans(int n, int k){
    int ans =1;
    for(int i=0; i<k; i++){
        ans=ans*(n-i);
        ans=ans/(i+1);
    }
    return ans;
}

void type2_ans(int n){
    int ans =1;
    cout<< ans << " ";
    for(int i=0; i<n; i++){
        ans=ans*(n-i);
        ans=ans/(i+1);
        cout << ans << " ";
    } 
    cout << endl;
}

void print_pascal(int n){
    for(int i=0; i<n; i++){
        type2_ans(i);
    }
}

int main(){
    int r, c;
    cin >> r >> c;
    cout << type1_ans(r-1, c-1) << endl;
    type2_ans(r-1);
    print_pascal(r);
}

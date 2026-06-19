/* You are given an array A of N integers. In one operation, you can do the following:
choose an index i (1≤i<N) delete both Ai and Ai+1 and insert back Ai | Ai+1 (∣ denotes the Bitwise OR Operator.)
Find the minimum number of operations needed to make all remaining array elements equal. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        int tot_or= 0;
        int cur_or=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            tot_or= tot_or | a[i];
        }
        int k=0;
        for (int i=0; i<n; i++){
            cur_or = cur_or | a[i];
            if (cur_or==tot_or){
                k++;
                cur_or=0;
            }
        }
        cout<<n-k<<endl;
    }      
}

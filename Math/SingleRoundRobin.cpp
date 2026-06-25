// A football league of N teams is taking place, where each team plays other teams once in single round robin fashion. A team gets 3 points for winning a game and 
//0 for losing (assume that no games end in a draw/tie). What is the maximum possible difference of points between the winning team and the second-placed team?

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<(n/2)*3<<endl;
    }
}

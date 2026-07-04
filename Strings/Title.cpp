/* cin.ignore() helps primarily when mixing formatted input (like cin >>) with line-based input (like getline()).  Because cin >> leaves the trailing newline 
character in the buffer, a subsequent getline() would immediately read that empty newline instead of waiting for new user input. Using cin.ignore() clears this 
residual character, ensuring the next input operation behaves correctly. */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        s[0]=toupper(s[0]);
        for(int i=1; i<s.size(); i++){
            if (s[i-1]==' ')    s[i]=toupper(s[i]);
             else if(isupper(s[i]) && (islower(s[i+1]) || islower(s[i-1]))){
                s[i] = tolower(s[i]); 
            }
        }
        cout<<s<<"\n";
    }
}

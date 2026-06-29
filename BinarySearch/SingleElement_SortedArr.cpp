// a single element occurs once and rest occur twice
#include<bits/stdc++.h>
using namespace std;

int single_occurence(vector<int>a){
    int n=a.size();
    if (n==1)   return a[0];
    if (a[0]!=a[1])     return a[0];
    else if (a[n-2]!=a[n-1])    return a[n-1];
    int low=1;
    int high=n-2;
    while(low<=high){
        int mid=(high+low)/2;
        if (a[mid]!=a[mid-1] && a[mid]!=a[mid+1])   return a[mid];
        if (mid%2==0){
            //left half
            if (a[mid]==a[mid+1])   low=mid+1;
            //right half
            else    high=mid-1;
        }  
        else{
            //left half
            if (a[mid]==a[mid-1])   low=mid+1;
            //right half
            else    high=mid-1;
        } 
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<single_occurence(a);
}

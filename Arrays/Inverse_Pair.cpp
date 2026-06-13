#include<bits/stdc++.h>
using namespace std;

//naming a global variable count makes it ambiguous with keyword count
//global variables are discouraged

//optimal approach using mergesort
int merge(vector<int>&arr, int low, int mid, int high){
    int left = low;
    int right = mid + 1;
    vector<int> temp;
    int cnt=0;
    while (left <= mid && right <= high){
        if (arr[left] <= arr[right]){
            temp.push_back(arr[left++]);
        }
        else{
            temp.push_back(arr[right++]);
            cnt+=(mid-left+1);
        }
    }

    while (left <= mid){
        temp.push_back(arr[left++]);
    }
    while (right <= high){
        temp.push_back(arr[right++]);
    }

    for (int i = 0; i < (int)temp.size(); i++){
        arr[low + i] = temp[i];
    }

    return cnt;
}

int mergesort(vector<int>&arr, int low, int high){
    int cnt=0;
    if (low >= high) return cnt;
    int mid = low + (high - low) / 2;
    cnt+=mergesort(arr, low, mid);
    cnt+=mergesort(arr, mid + 1, high);
    cnt+=merge(arr, low, mid, high);
    return cnt;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<mergesort(arr,0,n-1);
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int count_pairs(const vector<int> &arr, int low, int high, int mid){
    int r = mid + 1;
    int cnt = 0;
    for (int i = low; i <= mid; i++){
        while (r <= high && (long long)arr[i] > 2LL * arr[r]){
            r++;
        }
        cnt += r - (mid + 1);
    }
    return cnt;
}

void merge(vector<int> &arr, int low, int high, int mid){
    int left=low;
    int right=mid+1;
    vector<int>temp;
    while(left<=mid && right<=high){
        if (arr[left] > arr[right]){
            temp.push_back(arr[right++]);
        }
        else{
            temp.push_back(arr[left++]);
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
}

int mergesort(vector<int> &arr, int low, int high){
    int mid= low + (high-low)/2 ;
    int cnt=0;
    if (low>=high)  return cnt;
    cnt+=mergesort(arr,low,mid);
    cnt+=mergesort(arr,mid+1,high);
    cnt+=count_pairs(arr,low,high,mid);
    merge(arr,low,high,mid);
    return cnt;
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<mergesort(a,0, n-1);
}

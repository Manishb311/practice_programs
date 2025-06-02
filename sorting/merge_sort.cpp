#include<bits/stdc++.h>
using namespace std;
void ms(int arr[],int low,int mid,int high){
    vector<int> temp;
    int left=low;
    int right=mid+1;
    while( left<= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    
    for(int i=low;i<=high;i++){
        arr[i] = temp[i-low];
    }
}
void merges(int arr[], int low, int high){
    if(low == high) return;
    int mid = (low+high)/2;
    merges(arr,low,mid);
    merges(arr,mid+1,high);
    ms(arr,low,mid,high);
}

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++) cin>>arr[i];
    merges(arr, 0, n-1);
    for(int i=0;i<=n-1;i++) cout<<arr[i]<<" ";

}
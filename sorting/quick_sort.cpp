#include<bits/stdc++.h>
using namespace std;
int qs(int arr[],int low,int high){
    int pivot = arr[low];
    //two pointers..
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>=pivot && j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
        swap(arr[low],arr[j]);
    }
    return j;
}
void quicks(int arr[], int low, int high){
    if(low<high){
        int pIndex = qs(arr, low, high);
        quicks(arr, low,pIndex-1);
        quicks(arr, pIndex+1, high);
    }
}

int main(){
    int n;cin>>n;
     int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    quicks(arr, 0,n-1);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
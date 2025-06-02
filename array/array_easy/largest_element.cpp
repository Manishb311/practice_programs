#include<bits/stdc++.h>
using namespace std;

int largest_ele(int arr[], int n){
    int largest=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>largest) largest = arr[i];
    }
    return largest;
}
int main(){
    int n;std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) std::cin>>arr[i];
    cout<<largest_ele(arr , n);
    return 0;
}
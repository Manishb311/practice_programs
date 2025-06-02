#include<bits/stdc++.h>
using namespace std;

int secondLargest(int arr[], int n){
    int slargest = -1;
    int largest = arr[0];
    for(int i=1; i<n; i++){
     if(arr[i] > largest){
        slargest = largest;
        largest = arr[i];
        }
    else if( arr[i] < largest && arr[i] > slargest ) slargest = arr[i]; 
    }
    return slargest;
}
int main(){
    int n;std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) std::cin>>arr[i];
    cout<<secondLargest(arr , n);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
 int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    //precompute..
    int hash[10] ={0};
    for(auto it : arr)  hash[it]+=1;

    //fetching..
    int number;cin>>number;
    cout<< hash[number];

 }
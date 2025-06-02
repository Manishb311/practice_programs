//iterations using specifier auto and iterator it..

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i =0; i<n; i++) cin>>arr[i];
      for (auto it : arr) cout<<it;
}
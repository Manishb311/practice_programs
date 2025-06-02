// using hashing..

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 10;
    vector<int> a = {1,1,2,3,3,1,1,1,2,2};
    map<int, int>mpp;
    
    for(int i = 0; i<10; i++){
        mpp[a[i]]++;
    }
    for(auto it : mpp){
        if(it.second > n/2) cout<<it.first;
}
}
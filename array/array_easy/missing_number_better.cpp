#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int > a ={1,3,4,5,6,8};
    int n = a.size(); 
    int hash[n+1] = {0};

    for(int i = 0; i<n; i++){
        hash[a[i]] = 1;
    }
    for(int i = 1; i<n; i++){
        if(hash[i] == 0){
            cout<<i<<" ";
        }
    }
    return 0;
}
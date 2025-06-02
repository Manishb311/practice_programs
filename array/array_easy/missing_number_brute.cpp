#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int > a ={1,3,4,5,6,8};
    int n = a.size();  

    for(int i = 1; i<=n; i++){
        int flag = 0;
        for(int j=0; j<=n-1; j++){
            if(a[j] == i){
                flag = 1;
                break;
            }
        }
        if(flag == 0) cout<<i<<" ";
    }
}
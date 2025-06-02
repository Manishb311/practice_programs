#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 10;
    vector<int> a = {1,1,1,3,3,1,1,1,2,2};
    int cnt = 0;
    int el;

    for(int i =0; i<n; i++){
        if(cnt == 0){
            cnt = 1;
            el = a[i];
        }
        if(a[i] == el) cnt++;
        else cnt--;
    }

    int cnt1 = 0;
    for(int i = 0; i<n; i++){
        if(el == a[i]){
            cnt1++;
        }
    }
    
    if(cnt1 > n/2){
        cout<<el;
    }
}
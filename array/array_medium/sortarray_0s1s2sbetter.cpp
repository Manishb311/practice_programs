#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 10;
    vector<int> a = {0,1,1,0,2,1,0,1,2,1};
    int cnt0 = 0, cnt1 = 0, cnt2 =0;
    for(int i = 0; i<10; i++){
        if(a[i] == 0) cnt0++;
        else if(a[i] == 1) cnt1++;
        else cnt2++;
    }

    for(int i = 0; i<cnt0; i++){
         a[i] = 0;
    }
    for(int i = cnt0; i<cnt0 + cnt1; i++){
         a[i] = 1;
    }
    for(int i = cnt0 + cnt1; i<10; i++){
         a[i] = 2;
    }
     for(int i = 0; i<10; i++){
        cout<<a[i];
     }
}
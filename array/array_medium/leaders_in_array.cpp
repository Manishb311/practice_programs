#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 10;
    vector<int> a = {10,6,8,4,7,5,2,3,0,1};
    vector<int> ans;

    int max = a[n-1];
    ans.push_back(a[n-1]);

    for(int i = n-2; i>=0; i--){
        if(a[i] > max){
            ans.push_back(a[i]);
        }
            max = a[i];
    }

    for(int i=0; i<ans.size(); i++) cout<<ans[i]<<" ";
 }
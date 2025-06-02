//brute approach..
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 10;
    vector<int> a = {-1,1,-2,3,3,-1,-1,1,2,-2};
    vector<int> ans;
    vector<int> pos;
    vector<int> neg;

    for(int i=0; i<n; i++){
        if(a[i] < 0){
            neg.push_back(a[i]);
        }
        else{
            pos.push_back(a[i]);
        }
    }
     int k=0, l=0;
    for(int i = 0; i<n; i++){
        if(i%2==0){
            ans.push_back(pos[k]);
            k++;
        }
        else{
            ans.push_back(neg[l]);
            l++;
        }
    }
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
}


// //optimal approach..
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n = 10;
//     vector<int> a = {-1,1,-2,3,3,-1,-1,1,2,-2};
//     vector<int> ans(10);
//     int pos = 0;
//     int neg = 1;

//     for(int i = 0; i < n; i++){
//         if(a[i] < 0){
//             ans[neg] = a[i];
//             neg += 2;
//         }
//         else{
//             ans[pos] = a[i];
//             pos += 2;
//         }
//     }

//     for(int i = 0; i<n; i++){
//         cout<<ans[i]<<" ";
//     }
// }
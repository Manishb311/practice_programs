//naive brute approach...

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n = 5;
//     vector<int> a = {1,2,3,3,4};
//     int key; cin>>key;

//     for(int i=0; i<n; i++){
//         if(a[i] > key){
//             cout<<i+1;
//             break;
//         }
//     }
// }

//optimal approach...
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;
    vector<int> a = {1,2,3,3,4};
    int key; cin>>key;

    int low =0, high = n-1;
    int ans;
    while(low <= high){
        int mid  = (low+high)/2;

        if(a[mid] > key){
            ans = mid+1;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout<<ans;
}
//iterative approach...

// #include <bits/stdc++.h>
// using namespace std;

// int binary_srch(vector<int> a, int n, int target){
//     int low = 0, high = n-1;
//     int ans;
//     while(low <= high){
//         int mid = (low + high)/2;
//         if(target == a[mid]){
//             ans = mid+1;
//             break;
//         }
//         if(target < a[mid]){
//             high = mid - 1;
//         }
//         else{
//             low = mid + 1;
//         }
//     }
//     return ans;
// }

// int main(){
//     vector<int> a = {1,2,3,4,5,6,7,8,9,10};
//     int n = a.size();
//     int target; cin>>target;
//     cout<<binary_srch(a, n, target);
// }

// recursive approach..
#include <bits/stdc++.h>
using namespace std;

int binary_srch(vector<int> a, int low, int high, int target){
        if(low > high) return -1;

        int mid = (low + high)/2;

        if(target == a[mid]){
            return mid+1;
        }

        if(target < a[mid]){
            binary_srch(a, 0, mid - 1, target);
        }
        else{
            binary_srch(a, mid + 1, a.size() - 1, target);
        }
}

int main(){
    vector<int> a = {1,2,3,4,5,6,7,8,9,10};
    int low, high;
    int target; cin>>target;
    cout<<binary_srch(a, 0, a.size()-1, target);
}
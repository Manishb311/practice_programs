// // // Brute or Naive Approach..
// #include<bits/stdc++.h>
// using namespace std;
//  int main(){
//     int n = 10;
//     vector<int> a = {1,3,4,-1,-4,2,6,-5,4,6};
//     int maxSum = 0;
//     int sum;
//     for(int i = 0; i < n; i++){
//         for(int j = i; j<n; j++){
//             sum = 0;
//             for(int k = i; k<=j; k++){
//                 sum += a[k];
//                 maxSum = max(maxSum, sum);
//             }
//         }
//     }
//     cout<<maxSum;
//  }

// //  // Better Approach...
 #include<bits/stdc++.h>
using namespace std;
 int main(){
    int n = 10;
    vector<int> a = {1,3,4,-1,-4,2,6,-5,4,6};
    int maxSum = 0;
    int sum;
    for(int i = 0; i < n; i++){
        sum = 0;
        for(int j = i; j<n; j++){
            sum += a[j];
            maxSum = max(maxSum, sum);
        }
    }
    cout<<maxSum;
 }
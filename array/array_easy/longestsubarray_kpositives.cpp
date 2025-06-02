#include <bits/stdc++.h>
using namespace std;

int main(){
     vector<int> a = {1, 1, 2, 3, 4, 8, 9};
     long long k = 5;
     int len = 0;

     for(int i=0; i<a.size(); i++){//starting Index.
        for(int j=i; j<a.size(); j++){//last index.
            long long sum = 0;
            for(int k=i; k<=j; k++ ){// from ith index to jth index.
                sum += a[k];
            }
            if(sum == k){
                len = max(len, j - i + 1);
            }
        }
     }
     cout<<len;
}

//More optimized code:

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//      vector<int> a = {1, 1, 2, 3, 4, 8, 9};
//      long long k = 5;
//      int len = 0;

//      for(int i=0; i<a.size(); i++){//starting Index.
//             long long sum = 0;
//         for(int j=i; j<a.size(); j++){//last index.
//                 sum += a[j];
//             if(sum == k){
//                 len = max(len, j - i + 1);
//             }
//         }
//      }
//      cout<<len;
// }


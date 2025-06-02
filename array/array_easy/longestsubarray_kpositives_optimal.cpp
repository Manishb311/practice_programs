// This approach can be used for K positives as well as zeroes.
#include <bits/stdc++.h>
using namespace std;

int main(){
     vector<int> a = {1, 1, 2, 3, 4, 8, 9};
     long long k = 7;
     int maxLen = 0;
     int left = 0, right= 0; //using two pointers.
     int n = a.size();
     long long sum = a[0];
     while(right < n){
        while(left <= right && sum > k){
            sum -= a[left];
            left++;
        }
        if(sum == k){
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if(right < n){
            sum += a[right];
        }
     }
     cout<<maxLen;
}

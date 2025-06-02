// kadane's Algorithm..

#include<bits/stdc++.h>
using namespace std;
 int main(){
    int n = 10;
    vector<int> a = {1,3,4,-1,-4,2,6,-5,4,6};
    long long sum = 0;
    int maxi = LONG_MIN;
    int start = 0;
    int ansStart = -1, ansEnd = -1;
    for(int i = 0; i<n; i++){
        if(sum == 0) start = i;
        sum += a[i];

        if(sum > maxi){
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }
        if(sum < 0){
            sum = 0;
        }
    }
    cout<<maxi<<endl;
    for(int i = ansStart; i<=ansEnd; i++){
        cout<<a[i]<<" ";
    }
 }
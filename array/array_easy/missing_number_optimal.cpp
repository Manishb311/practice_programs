#include<bits/stdc++.h>
using namespace std;

int main(){
      vector<int > a ={1,3,4,5,6,8};
      int n = a.size();
      int xor1 = 0;
      int xor2 = 0;
      int ans;

      for(int i=0; i<n-1; i++){
        xor1 = xor1^(i+1);
        xor2 = xor2^a[i];
      }
        xor1 = xor1^n;
      ans = xor1^xor2;
      cout<<ans;
}
#include<bits/stdc++.h>
using namespace std;

void myfun(int i, int nums[], int n){
  if( i >= n)  return;
    swap(nums[i],nums[n-1]);
    myfun(++i, nums, n-1);
}

int main(){
    int a;
    cin>>a;
   int nums[a];
   for (int i=0; i<a; i++) cin>>nums[i];
        // cout<<"hello\n";
     myfun(0, nums, a);
   for (int i=0; i<a; i++) cout<<nums[i]<<" ";

return 0;
}

// i++ will not work in this problem,
// ++i will work fine and i+1 too;

#include <bits/stdc++.h>
using namespace std;
  
  void myfun(int i,int n){
    if(i>n) return;
    cout<<"manish"<<endl;
    myfun(i+1,n);
  }

int main(){
    int n;
    cin>>n;
     myfun(1,n);
}

// always remember the scope of the variables.
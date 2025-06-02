// from 1 to N
// #include <iostream>
// using namespace std;

// void myfun(int i,int n){
//     if(i<1)return;
//     myfun(i-1,n);
//     cout<<i<<" ";
// }

// int main(){
//     int n;
//     cin>>n;
//     myfun(n,n);
// }

// from N to 1;

#include<iostream>
using namespace std;

void myfun(int i,int n){
    if(i>n)return;
    myfun(i++,n);
    cout<<i<<" ";
}
 
 int main(){
    int n;
    cin>>n;
    int i = 1;
    myfun(1,n);
 }
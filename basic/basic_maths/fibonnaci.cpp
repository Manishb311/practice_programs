//using while loop
#include<iostream>
using namespace std;
int main(){
int first = 0;
int second = 1;
int limit = 1000;
 
 while(first < limit*100){
    cout<<second<<" ";
      int sum = first + second;
        first = second;
        second = sum; 
 }  
   cout<<endl;
 return 0;
 }
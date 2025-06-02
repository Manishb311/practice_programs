#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int x = n;
    int revNum = 0;
     while (n>0){
        int last = n%10;
        revNum = revNum*10 + last;
        n = n/10; 
     }
     cout <<revNum<<endl;
     if (revNum == x)cout <<"it is palindrome";
     else cout<<"it is not ..";

}
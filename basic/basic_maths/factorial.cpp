#include<iostream>
using namespace std;
int main(){
    unsigned num;
    cin>>num;
    unsigned long fact = 1;
    for(int i =num;i > 0;i--){
    fact = fact*i;
   // fact *=i;
    }
    cout<<"Factorial is "<<fact<<endl;
    return 0;
}
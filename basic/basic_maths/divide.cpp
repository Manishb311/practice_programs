#include<iostream>
using namespace std;
int main(){
    int dividend,divisor;
    char ch;
    do{
        cout<<"Dividend : "; cin>>dividend;
        cout<<"Divisor : "; cin>>divisor;
        cout<<"Quotient is :"<<dividend/divisor<<endl;
        cout<<"Remainder is :"<<dividend % divisor;
        cout<<"\nDo you want to repeat : (y/n) "; cin>>ch;
    }
    while(ch != 'n');
    return 0;
}
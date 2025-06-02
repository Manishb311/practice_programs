#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int x = n;
    int arm = 0;
    while (n>0){
        int ld = n%10;
        arm += ld*ld*ld;
        n = n/10;
    }
    cout<<arm<<endl;
    if (arm == x)cout<<"this is an armstrong num";
    else cout<<"this is not";

}
//this is only for three digits numbers.
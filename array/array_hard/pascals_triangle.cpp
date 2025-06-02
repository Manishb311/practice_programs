// Varient 1 - element present in r,c position..
// by using nCr formulae...

#include <bits/stdc++.h>
using namespace std;

int nCr(int n, int r){
    long long res = 1;
    for(int i=0; i<r; i++){
        res = res *(n-i);
        res = res/(i+1);
    }
    return res;
}

int pascalTriangle(int r, int c){
    int element = nCr(r-1, c-1);
    return element;
}

int main(){
    int r=3, c=2;
    int element = pascalTriangle(r, c);
    cout<<element;
}
// Also know as Dutch National Flag Algorithm..

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 10;
    vector<int> a = {0,1,1,0,2,1,0,1,2,1};
    int low = 0, mid = 0, high = 10 - 1;

    while(mid <= high){
    if(a[mid] == 0){
        swap(a[mid], a[low]);
        low++; mid++;
    } 
    
    if(a[mid] == 1){
        mid++;
    } 
    else{
        swap(a[mid], a[high]);
        high--;
    }
    }
    for(int i = 0; i<10; i++){
        cout<<a[i];
    }
}
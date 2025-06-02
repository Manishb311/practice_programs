#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a = {2,1,5,4,3,0,0};
    int n = a.size();
    int ind = -1;// only -1 because a[ind] can be any position between 0 -> n-1 (if it si found)...  

    for(int i = n-2; i>=0; i--){ // in this loop we will find the ele. which is smaller than its next ele. and store its
            //index in ind..
        if(a[i] < a[i+1]){
            ind = i;
            break;
        }
    }
    if(ind == -1){ //if did'nt find the ele. just reverse the array and output..
        reverse(a.begin(), a.end());
        for(int i = 0; i< n; i++){
            cout<<a[i]<<" ";
        }
    }

    if(ind != -1){  // if ele. is found.. 
        for(int i = n-1; i >= ind; i--){ // we will swap a[ind] with ele. greater than it from the end..
        if(a[i] > a[ind]){
            swap(a[i], a[ind]);
            break;
        }
    }
        reverse(a.begin() + ind + 1, a.end()); // then reverse the array from a[ind + 1] to a.end()...
         for(int i = 0; i< n; i++){
            cout<<a[i]<<" ";
        }
    }

}
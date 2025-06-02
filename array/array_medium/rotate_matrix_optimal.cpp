#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 4;
    vector<vector<int>>  matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for(int i=0; i<n; i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }
    
    for(int i = 0; i<n; i++){
        for(int j =0; j<n; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

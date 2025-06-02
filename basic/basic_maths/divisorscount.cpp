// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cin>>num;
//     for(int i=1; i<=num; i++){
//         if(num%i == 0)
//         cout<<i<<" ";
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    vector<int> ls;
    for(int i=1; i<=sqrt(num); i++){
        if(num%i == 0){              
        ls.push_back(i); 
        if(num/i != i){
            ls.push_back(num/i);
        }
        }
    }
    sort(ls.begin(), ls.end());
    for(auto it : ls) cout<<it<<" "; 
    return 0;
}

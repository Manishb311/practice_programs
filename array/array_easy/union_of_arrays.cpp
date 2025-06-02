#include<bits/stdc++.h>
using namespace std;
 int main(){
    vector<int> arr1 = {1,1,2,3,4,4,5};
    vector<int> arr2 ={1,2,3,3,4,5};

    set<int> st;
    for(int i=0;i<arr1.size();i++){
        st.insert(arr1[i]);
    }
    for(int i=0;i<arr2.size();i++){
        st.insert(arr2[i]);
    }

    vector<int> uni;
    for(auto it:st) uni.push_back(it);

    for(auto it:uni) cout<<uni[it]<<" ";
 }
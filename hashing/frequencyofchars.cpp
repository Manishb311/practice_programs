#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;cin>>s;

    //pre compute
    //for all type of alphabets and special characters we can use hash of 256 size (hash[256]) without any errors....
    int hash[10] ={0};
    for(int i=0; i<s.length(); i++) hash[s[i]-'a']+=1;

    int q;cin>>q;
    while(q--){
        //fetch
        char character;cin>>character;
        cout<<hash[character-'a']<<endl;

    }
}
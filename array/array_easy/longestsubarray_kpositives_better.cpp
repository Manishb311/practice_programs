#include <bits/stdc++.h>
using namespace std;

int main(){
     vector<int> a = {1, 1, 2, 0,3, 4, 8, 9};
     long long k = 7;
     int maxLen = 0;
     long long sum = 0;

        map<long long, int> preSumMap;

        for(int i=0; i<a.size(); i++){
            // prefix sum till index i.
            sum += a[i];

            if(sum == k){   //if sum = k, update the maxLen.
                maxLen = max(maxLen, i+1);
            }

            long long rem = sum - k;

            if(preSumMap.find(rem) != preSumMap.end()){ //
                int len = i - preSumMap[rem];
                maxLen = max(maxLen, len);
            } 

             if(preSumMap.find(rem) == preSumMap.end()){ //
                preSumMap[sum] = i;
            } 
        }


     cout<<maxLen;
}

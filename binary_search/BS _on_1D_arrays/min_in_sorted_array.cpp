#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int> a, int n){
    int low = 0, high = n-1;
    int ans = INT_MAX;
    while(low <= high){
        int mid = (low + high)/2;
        if(a[low] <= a[high]){  //if the array is already sorted then the a[low] is our answer....
            ans = min(ans, a[low]);
            break;
        }

        else if(a[low] <= a[mid]){ // if left-half is sorted..
            ans = min(ans, a[low]);//then keep a[low] as minimum...
            low = mid + 1; //eliminate the left-half....
        }

        else{ //if right-half is sorted....
            ans = min(ans, a[mid]); // keep a[low] as minimum...
            high = mid - 1; //eliminate the right-half...
        }
    }
    return ans;
} 

int main(){
    vector <int> a = {3,1,2};
    int n = a.size();
    int minEle = findMin(a, n);
    cout<<minEle;
}
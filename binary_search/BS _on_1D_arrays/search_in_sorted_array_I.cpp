#include <bits/stdc++.h>
using namespace std;

int findPosition(vector<int> a, int n, int target){
    int low = 0, high = n-1;
    int ans = -1;
    while(low <= high){
        int mid = (low + high)/2;
        if(a[mid] == target){ //if target found return position...
            ans = mid;
        }
        if(a[low] <= a[mid]){ //check if left-half is sorted or not.....
            if(a[low] <= target && target <= a[mid]){// check if target is in sorted left-half or not....
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        else{ // if left-half is not sorted.....
            if(a[mid] <= target && target <= a[high]){ // check if target is not other half or not....
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
    }
    return ans;
}

int main(){
    vector<int> a = {7,8,9,1,2,3,4,6};
    int n = a.size();
    int target; cin>> target;
    int ans= findPosition(a, n, target);
    cout<<ans;
}
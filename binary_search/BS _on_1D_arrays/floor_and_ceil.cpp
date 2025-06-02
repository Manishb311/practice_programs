#include <bits/stdc++.h>
using namespace std;

int findFloor(vector<int> a, int n, int target){
    int low = 0, high = n - 1;
    int ans = -1;
    while(low <= high){
        int mid = (low + high)/2;
        if(a[mid] <= target){
            ans = a[mid];
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return ans;
}

int findCeil(vector<int> a, int n, int target){
     int low = 0, high = n - 1;
     int ans = -1;
    while(low <= high){
        int mid = (low + high)/2;
        if(a[mid] >= target){
            ans = a[mid];
            high = mid -1;
        }
        else{
            low = mid +1;
        }
    }
    return ans;
}

int main(){
    vector<int> a = {1,2,2,3,4,5,7,9};
    int n = a.size();
    int target; cin>>target;
    cout<<"floor is "<<findFloor(a, n, target)<<endl;
    cout<<"ceil is "<<findCeil(a, n, target)<<endl;
}
// first last and total occurences...... optimal approach...

#include <bits/stdc++.h>
using namespace std;

int firstOccurence(vector<int> a, int n, int target){
    int low = 0, high = n-1;
    int ans= -1; //if not found then return -1....
    while(low <= high){
        int mid = (low + high)/2;
        if(a[mid] == target){
            ans = mid;
            high = mid - 1;
        }
        else if(a[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return ans;
}

int lastOccurence(vector<int> a, int n, int target){
    int low = 0, high = n-1;
    int ans = -1; //if not found then return -1....
    while(low <= high){
        int mid = (low + high)/2;
        if(a[mid] == target){
            ans = mid;
            low = mid + 1;
        }
        else if(a[mid] > target){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> a = {1,2,3,4,4,4,4,5,6,8};
    int n = a.size();
    int target; cin>>target;
    int first = firstOccurence(a, n, target);
    int last = lastOccurence(a, n, target);
    int totalOccu = last - first + 1;
    cout<<"first occurence -> "<<first<<endl;
    cout<<"last occurence -> "<<last<<endl;
    cout<<"total occurence -> "<<totalOccu<<endl;
}
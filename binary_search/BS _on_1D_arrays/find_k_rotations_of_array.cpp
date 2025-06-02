// slight changes from the min_in_sorted_array ques....

#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int> a, int n){
    int low = 0, high = n-1;
    int ans = INT_MAX;
    int index = -1;
    while(low <= high){
        int mid = (low + high)/2;
        if(a[low] <= a[high]){  //if the array is already sorted then the a[low] is our answer....
            if(a[low] < ans){
                index = low;
                ans = a[low];
            }
            break;
        }

        else if(a[low] <= a[mid]){ // if left-half is sorted..
            if(a[low] < ans){
                index = low;
                ans = a[low];
            }
            low = mid + 1; //eliminate the left-half....
        }

        else{ //if right-half is sorted....
            if(a[mid] < ans){
                index = mid;
                ans = a[mid];
            }
            high = mid - 1; //eliminate the right-half...
        }
    }
    return index;
} 

int main(){
    vector <int> a = {3,4,5,6,1,2};
    int n = a.size();
    int minEle = findMin(a, n);
    cout<<minEle;
}
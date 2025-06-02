/*in this code we have to print the indices of the element ehich give the targetet element on adding together*/
# include <iostream>
# include <vector>
using namespace std;
int main(){
    int target;
    cin>>target;
    cout<<"hello";
    int nums[4] = {1,2,7,11};
    int i,j;
     nums[i];
    for( i =0;i < sizeof(nums) - 1; i++){
        for( j = i+1; j < sizeof(nums); j++){
          if(nums[j] == target - nums[i])
          return i,j;
        }
    }
cout<<"hello";

}
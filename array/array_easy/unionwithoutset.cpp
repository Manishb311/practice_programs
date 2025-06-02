#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[] = {1, 1, 3, 3, 6, 6, 7, 8};
    int arr2[] = {8, 9, 10, 11, 12};
    vector<int> union_of_arrays;
    int i = 0;
    int j = 0;
    int n1 = 8;
    int n2 = 5;

    while(i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j]){
            if (union_of_arrays.size() == 0 || union_of_arrays.back() != arr1[i]){
                union_of_arrays.push_back(arr1[i]);
                }
                i++;
        }

        else{
            
            if (union_of_arrays.size() == 0 || union_of_arrays.back() != arr2[j]){
                union_of_arrays.push_back(arr2[j]);
                }
                j++;
        }
    }

    while(j < n2){
         
            if (union_of_arrays.back() != arr2[j]){
                union_of_arrays.push_back(arr2[j]);
                }
                j++;
    }

    while(i<n1){
            
            if ( union_of_arrays.back() != arr1[i]){
                union_of_arrays.push_back(arr1[i]);
                }
                i++;
    }

    for(auto & it : union_of_arrays)
        cout<<it<<" ";
}

// #include <bits/stdc++.h>

// using namespace std;

// vector < int > FindUnion(int arr1[], int arr2[], int n, int m) {
//   int i = 0, j = 0; // pointers
//   vector < int > Union; // Uninon vector
//   while (i < n && j < m) {
//     if (arr1[i] <= arr2[j]) // Case 1 and 2
//     {
//       if (Union.size() == 0 || Union.back() != arr1[i])
//         Union.push_back(arr1[i]);
//       i++;
//     } else // case 3
//     {
//       if (Union.size() == 0 || Union.back() != arr2[j])
//         Union.push_back(arr2[j]);
//       j++;
//     }
//   }
//   while (i < n) // IF any element left in arr1
//   {
//     if (Union.back() != arr1[i])
//       Union.push_back(arr1[i]);
//     i++;
//   }
//   while (j < m) // If any elements left in arr2
//   {
//     if (Union.back() != arr2[j])
//       Union.push_back(arr2[j]);
//     j++;
//   }
//   return Union;
// }

// int main()

// {
//   int n = 10, m = 7;
//   int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//   int arr2[] = {2, 3, 4, 4, 5, 11, 12}; 
//   vector < int > Union = FindUnion(arr1, arr2, n, m);
//   cout << "Union of arr1 and arr2 is  " << endl;
//   for (auto & val: Union)
//     cout << val << " ";
//   return 0;
// }

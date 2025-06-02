#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {1, 1, 2, 3, 4, 8, 9};
    vector<int> b = {1, 2, 8, 9};
    vector<int> ans;
    int m = a.size();
    int n = b.size();
    int i = 0;
    int j = 0;
    while (i < m && j < n)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
        {
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    for (int i=0; i<ans.size(); i++)
        cout << ans[i] << " ";
}

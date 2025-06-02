#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {1, 1, 2, 4, 5, 5, 6};
    vector<int> b = {1, 2, 3, 6};
    int n = a.size();
    int m = b.size();
    int vis[m] = {0};
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j] && vis[j] == 0)
            {
                ans.push_back(a[i]);
                vis[j] = 1;
                break;
            }
            if (b[j] > a[i])
                break;
        }
    }
    for (int i=0; i<ans.size(); i++)
        cout << ans[i] << " ";
}
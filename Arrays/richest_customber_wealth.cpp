#include <bits/stdc++.h>
using namespace std;

int maximumWealth(vector<vector<int>> &accounts)
{
    int ans = INT_MIN;
    for (int i = 0; i < accounts.size(); i++)
    {
        int curr_sum = 0;
        for (int j = 0; j < accounts[i].size(); j++)
        {
            curr_sum += accounts[i][j];
        }
        ans = max(ans, curr_sum);
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> accounts;
        for (int i = 0; i < n; i++)
        {
            vector<int> temp;
            for (int j = 0; j < m; j++)
            {
                int tp;
                cin >> tp;
                temp.push_back(tp);
            }
            accounts.push_back(temp);
        }
        cout<<maximumWealth(accounts)<<endl;
    }
    return 0;
}
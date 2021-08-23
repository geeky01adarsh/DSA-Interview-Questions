#include <bits/stdc++.h>
using namespace std;

int oddCells(int m, int n, vector<vector<int>> &indices)
{
    vector<int> row(m, 0), col(n, 0);

    for (int i = 0; i < indices.size(); i++)
    {
        row[indices[i][0]]++;
        col[indices[i][1]]++;
    }
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (row[i] + col[j] & 1)
                ans++;
        }
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r; 
        cin>>r;
        int m, n;
        cin >> m >> n;
        vector<vector<int>> nums;
        for (int i = 0; i < r; i++)
        {
            vector<int> v;
            for (int j = 0; j < 2; j++)
            {
                int temp;
                cin >> temp;
                v.push_back(temp);
            }
            nums.push_back(v);
        }

        cout<<oddCells(m, n, nums)<<endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

int countNegatives(vector<vector<int>> &grid)
{
    int count = 0;
    for (int i = grid[0].size() - 1; i >= 0; i--)
    {
        for (int j = grid.size() - 1; j >= 0; j--)
        {
            if (grid[j][i] < 0)
                count++;
            else
                break;
        }
    }
    return count;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    cout << countNegatives(v) << endl;
    return 0;
}
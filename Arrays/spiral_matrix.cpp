#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &mat)
{
    vector<int> arr;
    int n = mat.size(), m = mat[0].size(), dir = 1;
    int left = 0, right = mat[0].size() - 1, down = mat.size() - 1, up = 0, i;
    while (arr.size() != m * n)
    {
        if (dir == 1)
        {
            for (i = left; i <= right; i++)
            {
                arr.push_back(mat[left][i]);
            }
            left++;
            dir = 2;
        }
        else if (dir == 2)
        {
            for (i = up + 1; i <= down; i++)
            {
                arr.push_back(mat[i][right]);
            }
            right--;
            dir = 3;
        }
        else if (dir == 3)
        {
            for (i = right; i >= up; i--)
            {
                arr.push_back(mat[down][i]);
            }
            down--;
            dir = 4;
        }
        else if (dir == 4)
        {
            for (i = down; i >= left; i--)
            {
                arr.push_back(mat[i][up]);
            }
            dir = 1;
            up++;
        }
    }
    return arr;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> nums;
        for (int i = 0; i < n; i++)
        {
            vector<int> v;
            for (int j = 0; j < m; j++)
            {
                int temp;
                cin >> temp;
                v.push_back(temp);
            }
            nums.push_back(v);
        }
        vector<int> v;

        v = spiralOrder(nums);
        for (auto i : v)
            cout << i << " ";
        cout << endl;
    }
}
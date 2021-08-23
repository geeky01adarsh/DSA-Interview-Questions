#include <bits/stdc++.h>

using namespace std;

int diagonalSum(vector<vector<int>> &mat)
{
    int sum = 0;
    int n = mat.size();
    for (int i = 0; i < n; i++)
    {
        sum += mat[i][i];
    }
    int j = n - 1;
    for (int i = 0; i < n; i++)
    {
        sum += mat[j--][i];
    }
    if (n % 2)
    {
        sum -= mat[n / 2][n / 2];
    }

    return sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r;
        cin >> r;
        vector<vector<int>> nums;
        for (int i = 0; i < r; i++)
        {
            vector<int> v;
            for (int j = 0; j < r; j++)
            {
                int temp;
                cin >> temp;
                v.push_back(temp);
            }
            nums.push_back(v);
        }

        cout << diagonalSum(nums) << endl;
    }
}
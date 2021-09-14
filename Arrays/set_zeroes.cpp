#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>> &matrix)
{
    int n = matrix.size(), m = matrix[0].size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                // Set all the elements that are not zero as -9999
                for (int k = 0; k < m; k++)
                {
                    if (matrix[i][k] != 0)
                    {
                        matrix[i][k] = -9999;
                    }
                }
                break;
            }
        }
    }

    // Traverse column wise
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (matrix[i][j] == 0)
            {
                // Set all the elements that are not zero as -9999
                for (int k = 0; k < n; k++)
                {
                    if (matrix[k][j] != 0)
                    {
                        matrix[k][j] = -9999;
                    }
                }
            }
        }
    }

    // Update all -9999 as 0
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == -9999)
            {
                matrix[i][j] = 0;
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
    {
        vector<int> x;
        for (int j = 0; j < m; j++)
        {
            int temp;
            cin >> temp;
            x.push_back(temp);
        }
        v.push_back(x);
    }
    setZeroes(v);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << v[i][j] << " ";
        cout << endl;
    }
    return 0;
}
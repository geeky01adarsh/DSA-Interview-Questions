#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>> &matrix)
{
    if (matrix.size() == matrix[0].size())
    {
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = i; j < matrix[i].size(); j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        return matrix;
    }
    vector<vector<int>> ans;
    // int k=0;
    for (int i = 0; i < matrix[0].size(); i++)
    {
        vector<int> v(matrix.size(), 0);
        int k = 0;
        for (int j = 0; j < matrix.size(); j++)
        {

            v[j] = matrix[k++][i];
        }
        ans.push_back(v);
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
        nums = transpose(nums);
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
                cout << nums[i][j] << " ";
            cout << endl;
        }
    }
}
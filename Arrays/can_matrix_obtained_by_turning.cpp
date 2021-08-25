#include <bits/stdc++.h>
using namespace std;

void turn(vector<vector<int>> &vec)
{
    int p = vec.size();
    vector<vector<int>> result;
    for (int i = 0; i < p; i++)
    {
        vector<int> v;
        for (int j = p - 1; j >= 0; j--)
        {
            v.push_back(vec[j][i]);
        }
        result.push_back(v);
    }
    vec = result;
}

bool findRotation(vector<vector<int>> &mat, vector<vector<int>> &target)
{
    if (mat == target)
        return true;
    int num = 3;
    while (num)
    {
        turn(mat);
        if (mat == target)
            return true;
        num--;
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r;
        cin >> r;
        vector<vector<int>> nums, target;
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
        for (int i = 0; i < r; i++)
        {
            vector<int> v;
            for (int j = 0; j < r; j++)
            {
                int temp;
                cin >> temp;
                v.push_back(temp);
            }
            target.push_back(v);
        }

        cout << findRotation(nums, target) << endl;
    }
}
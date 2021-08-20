#include <bits/stdc++.h>

using namespace std;

vector<int> buildArray(vector<int> &nums)
{
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        ans.push_back(nums[nums[i]]);
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        v = buildArray(v);
        for (auto i : v)
            cout << i << " ";
        cout << endl;
    }
}
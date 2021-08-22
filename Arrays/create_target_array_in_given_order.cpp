#include <bits/stdc++.h>
using namespace std;

vector<int> createTargetArray(vector<int> &nums, vector<int> &index)
{
    int n = index.size();
    vector<int> targetArray;
    for (int i = 0; i < n; i++)
    {
        targetArray.insert(targetArray.begin() + index[i], nums[i]);
    }
    return targetArray;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> nums, index;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            nums.push_back(temp);
        }
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            index.push_back(temp);
        }
        vector<int> v = createTargetArray(nums, index);
        for (auto i : v)
            cout << i << " ";
        cout << endl;
    }
}
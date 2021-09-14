#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &nums, int k)
{
    k %= nums.size();
    if (k == 0)
        return;
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> nums;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            nums.push_back(temp);
        }
        rotate(nums, k);
        for (auto i : nums)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}
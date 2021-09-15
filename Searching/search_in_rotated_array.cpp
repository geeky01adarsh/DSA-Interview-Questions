#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &nums, int target)
{
    int r = nums.size() - 1;
    int l = 0;
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (nums[m] == target)
            return m;
        else if (nums[l] <= nums[m])
        {
            if (target >= nums[l] && target <= nums[m])
            {
                r = m - 1;
            }
            else
                l = m + 1;
        }
        else
        {
            if (target >= nums[m] && target <= nums[r])
            {
                l = m + 1;
            }
            else
                r = m - 1;
        }
    }
    return -1;
}

int main()
{
    int n, tar;
    cin >> n >> tar;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    cout << search(v, tar) << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

bool canJump(vector<int> &nums)
{
    int currend = 0, currfar = 0, n = nums.size();
    for (int i = 0; i < n - 1; i++)
    {
        currfar = max(currfar, nums[i] + i);
        if (i == currend)
            currend = currfar;
        if (currend >= n - 1)
        {
            break;
        }
    }
    if (currend < n - 1)
        return 0;
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> nums;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            nums.push_back(temp);
        }
        cout << canJump(nums) << endl;
    }
    return 0;
}
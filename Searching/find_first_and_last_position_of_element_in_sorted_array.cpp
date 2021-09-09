#include <bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int> &nums, int target)
{
    int start = 0, end = nums.size(), mid, left, right;
    while (start < end)
    {
        mid = (start + end) / 2;
        if (nums[mid] >= target)
            end = mid;
        else
            start = mid + 1;
    }
    left = start;
    start = 0, end = nums.size();
    while (start < end)
    {
        mid = (start + end) / 2;
        if (nums[mid] > target)
            end = mid;
        else
            start = mid + 1;
    }
    right = start;
    return left == right ? vector<int>{-1, -1} : vector<int>{left, right - 1};
}

int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    vector<int> ans = searchRange(v, target);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}
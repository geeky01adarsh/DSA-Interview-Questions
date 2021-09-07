#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int> nums, int target)
{
    int low = 0, high = nums.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return high + 1;
}

int main()
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
    int target;
    cin>>target;
    cout<<searchInsert(v, target);
}
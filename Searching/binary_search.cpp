#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &nums, int target)
{
    int low = 0, high = nums.size() - 1;
    while (low <= high)
    {
        int mid = (high - low) / 2 + low;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] > target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
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
    cout << search(v, target) << endl;
}

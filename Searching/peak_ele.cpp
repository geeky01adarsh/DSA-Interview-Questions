#include <bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int> &num)
{
    int low = 0, high = num.size() - 1;
    while (low < high - 1)
    {
        int mid = (low + high) / 2;
        if (num[mid] > num[mid - 1] && num[mid] > num[mid + 1])
            return mid;
        else if (num[mid] > num[mid + 1])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return num[low] > num[high] ? low : high;
}

int main()
{
    int n, target;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    cout << findPeakElement(v) << endl;
    return 0;
}
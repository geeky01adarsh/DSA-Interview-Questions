#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int> &num)
{
    if (num.empty())
        return 0;
    int low = 0;
    int high = num.size() - 1;
    int mid;

    while (low < high)
    {
        mid = (low + high) / 2;
        if (num[low] > num[mid])
        {
            low++;
            high = mid;
        }
        else if (num[mid] > num[high])
        {
            low = ++mid;
        }
        else
            high = mid;
    }

    return num[low];
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
    cout << findMin(v) << endl;
    return 0;
}
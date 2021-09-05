#include <bits/stdc++.h>
using namespace std;

int findKthPositive(vector<int> &A, int k)
{
    int l = 0, r = A.size(), m;
    while (l < r)
    {
        m = (l + r) / 2;
        if (A[m] - 1 - m < k)
            l = m + 1;
        else
            r = m;
    }
    return l + k;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
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
        cout << findKthPositive(v, target) << endl;
    }
    return 0;
}
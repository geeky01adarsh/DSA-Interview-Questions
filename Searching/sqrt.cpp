#include <bits/stdc++.h>
using namespace std;

int mySqrt(int x)
{
    int low = 0, high = x;
    long mid;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (mid * mid <= x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low - 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout<<mySqrt(n)<<endl;
    }
    return 0;
}
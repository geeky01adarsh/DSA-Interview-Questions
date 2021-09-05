#include <bits/stdc++.h>
using namespace std;

int arrangeCoins(int n)
{
    for (long long i = 0; i < n; i++)
    {
        if (i * (i + 1) / 2 == n)
            return i;
        if (i * (i + 1) / 2 > n)
            return i - 1;
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;
    cout << arrangeCoins(n) << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

// api call will be different
int guess(int n)
{
    if (n > 6)
        return -1;
    else if (n == 6)
        return 0;
    else
        return 1;
}

int guessNumber(int n)
{
    int maxNumber = n, minNumber = 1;
    while (minNumber<=maxNumber)
    {
        int meanNumber = (maxNumber - minNumber) / 2 + minNumber;
        int res = guess(meanNumber);
        if (res == 0)
            return meanNumber;
        else if (res == 1)
            minNumber = meanNumber + 1;
        else
            maxNumber = meanNumber - 1;
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    cout<<guessNumber(n)<<endl;
    return 0;
}
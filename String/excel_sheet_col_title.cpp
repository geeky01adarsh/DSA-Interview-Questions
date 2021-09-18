#include <bits/stdc++.h>
using namespace std;

string convertToTitle(int columnNumber)
{
    string result = "";
    while (columnNumber > 0)
    {
        int remainder = columnNumber % 26;
        if (remainder == 0)
        {
            result = 'Z' + result;
            remainder = 26;
        }
        else
        {
            char c = 'A' + (remainder - 1);
            result = c + result;
        }
        columnNumber = (columnNumber - remainder) / 26;
    }
    return result;
}

int main()
{
    int n;
    cin>>n;
    cout<<convertToTitle(n)<<endl;
}
#include <bits/stdc++.h>
using namespace std;

void reverseString(vector<char> &s)
{
    int i = 0, n = s.size() - 1;
    while (i < n)
    {
        swap(s[i++], s[n--]);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<char> s;
    for (int i = 0; i < n; i++)
    {
        char ch;
        cin >> ch;
        s.push_back(ch);
    }
    reverseString(s);
    for (auto i : s)
        cout << i << " ";
    cout << endl;
    return 0;
}
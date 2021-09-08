#include <bits/stdc++.h>
using namespace std;

vector<int> fairCandySwap(vector<int> &A, vector<int> &B)
{
    // Note that the problem statement says that Alice and Bob need to exchange one candy each, no more or no less.
    // Assume x needs to be removed and y needs to be added to A to equalize, so:
    //  Sum(A) - x + y = Sum(B) - y + x
    //  therefore, Sum(A) - Sum(B) = -2y + 2x
    //  therefore, x = ((Sum(A) - Sum(B)) / 2) + y
    //  lets call ((Sum(A) - Sum(B)) / 2), delta

    int sumA = 0;
    int sumB = 0;

    for (auto e : A)
        sumA += e;

    for (auto e : B)
        sumB += e;

    int delta = (sumA - sumB) / 2;

    unordered_set<int> searchA;
    for (auto x : A)
        searchA.insert(x);

    for (auto y : B)
    {
        if (searchA.count(delta + y) > 0)
        {
            return vector<int>{delta + y, y};
        }
    }

    return {};
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> x, y;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        x.push_back(temp);
    }
    for (int i = 0; i < m; i++)
    {
        int temp;
        cin >> temp;
        y.push_back(temp);
    }
    vector<int> ans = fairCandySwap(x,y);
    for(auto i:ans)
    cout<<i<<" ";
    cout<<endl;
}
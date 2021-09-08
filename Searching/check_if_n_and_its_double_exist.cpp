#include <bits/stdc++.h>
using namespace std;

bool checkIfExist(vector<int> &arr)
{
    unordered_map<int, int> map;
    for (int i = 0; i < arr.size(); i++)
    {
        map[arr[i]]++;
        if (arr[i] == 0 && map[arr[i]] == 1)
            continue;
        if (map.count(2 * arr[i]) > 0 || ((arr[i] % 2 == 0) && map.count(arr[i] / 2) > 0))
            return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    cout << checkIfExist(v) << endl;
    return 0;
}
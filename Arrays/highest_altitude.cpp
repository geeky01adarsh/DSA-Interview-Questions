#include <bits/stdc++.h>
using namespace std;

int largestAltitude(vector<int> &gain)
{
    int highest_altitude = max(0, gain[0]);
    int curr_peak = gain[0];
    for (int i = 1; i < gain.size(); i++)
    {
        curr_peak += gain[i];
        highest_altitude = max(highest_altitude, curr_peak);
    }
    return highest_altitude;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> nums;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            nums.push_back(temp);
        }
        cout << largestAltitude(nums) << endl;
    }
}
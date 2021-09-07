#include <bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(vector<int> &arr)
{
    // linear search
    // for(int i=0; i<arr.size()-1; i++){
    //     if(arr[i]>arr[i+1]) return i;
    // }
    // return arr.size()-1;

    // binary search
    int l = 0, r = arr.size() - 1, mid;
    while (l < r)
    {
        mid = (l + r) / 2;
        if (arr[mid] < arr[mid + 1])
            l = mid + 1;
        else
            r = mid;
    }
    return l;
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
    cout<<peakIndexInMountainArray(v)<<endl;
    return 0;
}
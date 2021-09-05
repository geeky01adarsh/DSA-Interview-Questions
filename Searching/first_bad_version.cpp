#include <bits/stdc++.h>
using namespace std;

vector<bool> check;

bool isBadVersion(int n){
    return check[n];
}

int firstBadVersion(int n)
{
    int low = 0, high = n;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (!isBadVersion(mid))
        {
            if (!isBadVersion(mid + 1))
                low = mid + 1;
            else
                return mid + 1;
        }
        else
            high = mid - 1;
    }
    return -1;
}

int main(){
    int n, x;
    cin>>n>>x;
    for(int i=0; i<n; i++){
        if(i<x) check.push_back(0);
        else check.push_back(1);
    }

    cout << firstBadVersion(n)<<endl;
    return 0;
}
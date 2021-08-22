#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> flipAndInvertImage(vector<vector<int>> &image)
{
    int n = image.size();
    for (int i = 0; i < n; i++)
    {
        reverse(image[i].begin(), image[i].end());
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (image[i][j])
                image[i][j] = 0;
            else
                image[i][j] = 1;
        }
    }
    return image;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> nums;
        for (int i = 0; i < n; i++)
        {
            vector<int> v;
            for (int j = 0; j < n; j++)
            {
                int temp;
                cin >> temp;
                v.push_back(temp);
            }
            nums.push_back(v);
        }
        nums = flipAndInvertImage(nums);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<nums[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
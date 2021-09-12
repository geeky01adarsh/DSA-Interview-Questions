#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i = m - 1, j = n - 1, tar = n + m - 1;

    while (j >= 0)
    {
        if (i >= 0 && nums1[i] > nums2[j])
            nums1[tar--] = nums1[i--];
        else
            nums1[tar--] = nums2[j--];
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> m >> n;
        vector<int> nums1(m + n, 0);
        vector<int> nums2(n, 0);
        for (int i = 0; i < m + n; i++)
        {
            int temp;
            cin >> temp;
            nums1[i] = temp;
        }
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            nums2[i] = temp;
        }
        merge(nums1, m, nums2, n);
        for (auto i : nums1)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}
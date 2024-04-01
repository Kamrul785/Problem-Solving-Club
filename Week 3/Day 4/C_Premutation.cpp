#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n - 1));
        // int a[n][n-1];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> a[i][j];
            }
        }
        map<int, int> freq;
        int mx = INT_MIN, mxidx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            freq[a[i][n - 2]]++;
        }
        for (auto x : freq)
        {
            if (x.second >= mxidx)
            {
                mx = x.first;
                mxidx = x.second;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (a[i][n - 2] != mx)
                {
                    cout<<a[i][j]<<" ";
                }
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}
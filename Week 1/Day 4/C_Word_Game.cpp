#include <bits/stdc++.h>
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
        vector<vector<string>> s(3,vector<string>(n));
        map<string, int> freq;
        int a[3] = {0};
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> s[i][j];
                freq[s[i][j]]++;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (freq[s[i][j]] == 1)
                {
                    a[i] += 3;
                }
                else if (freq[s[i][j]] == 2)
                {
                    a[i] += 1;
                }
            }
        }
        cout << a[0] << " " << a[1] << " " << a[2] << endl;
    }
    return 0;
}
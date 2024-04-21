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
        string s;
        cin >> s;
        int n = s.size();
        int mx = max(s[0], s[n - 1]);
        int mn = min(s[0], s[n - 1]);
        int cost = 0;
        vector<pair<char, int>> v;
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= mn && s[i] <= mx)
            {
                v.push_back({s[i], i});
            }
        }
        sort(v.begin(), v.end(), [&](pair<char, int> a, pair<char, int> b)
             { return a.second < b.second; });

        if (v.size() > 2)
        {
            sort(v.begin() + 1, v.begin() + v.size() - 1, [&](pair<char, int> a, pair<char, int> b)
                {
                    if (s[0] > s[n - 1])
                        return a.first > b.first;
                    return a.first < b.first;
                });
        }
        vector<int> ans;
        ans.push_back(1);
        for (int i = 1; i < v.size(); i++)
        {
            cost += abs(v[i].first - v[i - 1].first);
            ans.push_back(v[i].second + 1);
        }

        cout << cost << " " << ans.size() << endl;
        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
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
        vector<int> cap, sml, ans;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'b')
            {
                if (!sml.empty())
                {
                    sml.pop_back();
                }
            }
            else if (s[i] == 'B')
            {
                if (!cap.empty())
                {
                    cap.pop_back();
                }
            }
            else
            {
                if (s[i] >= 'a' && s[i] <= 'z')
                {
                    sml.push_back(i);
                }
                else
                {
                    cap.push_back(i);
                }
            }
        }
        for (auto x : sml)
            ans.push_back(x);
        for (auto x : cap)
            ans.push_back(x);
        sort(ans.begin(), ans.end());
        for (auto i : ans)
        {
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}
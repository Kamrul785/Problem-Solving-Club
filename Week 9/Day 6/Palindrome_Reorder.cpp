#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    map<char, ll> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    int odd = 0;
    char c;
    int m = 0;
    for (auto x : mp)
    {
        if (x.second % 2 != 0)
        {
            odd++;
            c = x.first;
            m = x.second;
        }
    }
    if (odd > 1)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    string a = "";
    string o = "";
    for (int i = 0; i < m; i++)
    {
        o.push_back(c);
    }

    for (auto x : mp)
    {
        if (x.second % 2 == 0)
        {
            for (int i = 1; i <= x.second / 2; i++)
            {
                a.push_back(x.first);
            }
        }
    }
    string b = "";
    for (auto x : mp)
    {
        if (x.second % 2 == 0)
        {
            for (int i = 1; i <= x.second / 2; i++)
            {
                b.push_back(x.first);
            }
        }
    }
    reverse(b.begin(), b.end());

    cout << a;
    cout << o;
    cout << b;
    cout << endl;

    // cout<<endl;
    // for (auto x : mp)
    // {
    //     cout << x.first << "->" << x.second << endl;
    // }
    return 0;
}
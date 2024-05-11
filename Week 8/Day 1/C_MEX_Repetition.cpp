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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        set<int> st;
        for (int i = 0; i <= n; i++)
        {
            st.insert(i);
        }
        for (auto x : a)
        {
            st.erase(x);
        }
        for (auto x : st)
            a.push_back(x);

        int j = (n + 1 - k % (n + 1)) % (n + 1);
        for (int i = 0; i < n; i++)
        {
            cout << a[j] << " ";
            (j += 1) %= (n + 1);
        }
        cout << endl;
    }
    return 0;
}
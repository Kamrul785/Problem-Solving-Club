#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
bool check(int n, int s, vector<int> &arr)
{
    if (n == 0)
        return ((s % 360) == 0 ? true : false);
    return check(n - 1, s + arr[n - 1], arr) || check(n - 1, s - arr[n - 1], arr);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (check(n, 0, arr))
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
    return 0;
}
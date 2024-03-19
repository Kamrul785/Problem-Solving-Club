#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int m = 1, p = -1;
    for (int x : v)
    {
        if (x > m)
        {
            p = m;
            break;
        }
        else
        {
            m++;
        }
    }
    if(p != -1){
        cout<<p;
    }
    else{
        cout<<m;
    }
    return 0;

    // int n;
    // cin >> n;
    // vector<bool> present(n + 1, false); 
    // for (int i = 0; i < n - 1; i++) {
    //     int num;
    //     cin >> num;
    //     if(num <= n) {
    //         present[num] = true;
    //     }
    // }
    // for (int i = 1; i <= n; i++) {
    //     if (!present[i]) {
    //         cout << i << endl;
    //         return 0;
    //     }
    // }
    // cout << n + 1 << endl;
}
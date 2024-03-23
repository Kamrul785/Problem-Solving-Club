#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long s;
    cin >> n >> s;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long sum = 0, ans = INT_MAX, l = 0, r = 0;
    while (r < n) 
    {
        sum += a[r]; 
        if (sum >= s) 
        {
            ans = min(ans, r - l + 1); 
            while (sum >= s && l <= r) 
            {
                sum -= a[l]; 
                l++;         
                if (sum >= s) 
                {
                    ans = min(ans, r - l + 1);
                }
            }
        }
        r++;    
    }
    if(ans == INT_MAX){
        cout<<-1<<endl;
    }
    else{
        cout<<ans<<endl;
    }
    return 0;
}
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
        int m = n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(int i = 0 ;i<n;i++){
            int sz;
            cin>>sz;
            string s;
            cin>>s;
            for(auto c : s){
                if(c == 'D'){
                    if(a[i] == 9){
                        a[i] = 0;
                    }
                    else{
                        a[i]+= 1;
                    }
                }
                else{
                    if(a[i] == 0){
                        a[i] = 9;
                    }
                    else{
                        a[i]-= 1;
                    }
                }
            }
        }
        for(int i = 0 ;i<n; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
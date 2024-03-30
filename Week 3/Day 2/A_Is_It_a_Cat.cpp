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
        string s;
        cin >> s;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        vector<char>v;
        for(int i = 0 ;i<n-1; i++){
            if(s[i] != s[i+1]){
                v.push_back(s[i]);
            }
        }
        v.push_back(s[n-1]);
        if(v.size() == 4){
            if(v[0] == 'm' && v[1] == 'e' && v[2] == 'o' && v[3] == 'w'){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
            continue;
        }
        cout<<"NO"<<endl;
    }
    return 0;
}
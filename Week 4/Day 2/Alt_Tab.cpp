#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    stack<string>st;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        st.push(s);
    }
    set<string>ans;
    while(!st.empty()){
        if(ans.find(st.top()) == ans.end()){
            ans.insert(st.top());
            string x = st.top();
            if(x.size() > 2){
                cout<<x[x.size() - 2]<<x[x.size() - 1];
            }
            // else cout<<x;
        }
        st.pop();
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt = 0;
        stack<char>st;
        for(auto c:s){
            if(c == '('){
                st.push(c);
            }
            else{
                if(st.empty()){
                    cnt++;
                }
                else{
                    st.pop();
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
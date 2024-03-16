#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    vector<int>cnt(26,0);
    bool flag = false;
    for(char c:s){
        cnt[c-'a']++;
    }
    for(int i = 0 ;i<26;i++){
        if(cnt[i] == 0){
            cout<<char(i+'a');
            flag = true;
            break;
        }
    }
    if(flag == false){
        cout<<"None";
    }
    return 0;
}
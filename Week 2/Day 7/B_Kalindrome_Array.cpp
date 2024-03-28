#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
bool solve(vector<int>v){
    int i = 0;
    int j = v.size()-1;
    bool flag = true;
    while(i < j){
        if(v[i] != v[j]){
            flag = false;
            break;
        }
        i++;
        j--;
    }
    return flag;
}
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool flag = true;
        int i = 0, j = n-1;
        int idx,idy;
        while(i < j){
            if(a[i] != a[j]){
                flag = false;
                idx = a[i] , idy = a[j];
                break;
            }
            i++;
            j--;
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            vector<int>v1,v2;
            for(int i =0; i<n;i++){
                if(idx != a[i]) v1.push_back(a[i]);
            }
            for(int i =0; i<n;i++){
                if(idy != a[i]) v2.push_back(a[i]);
            }
            if(solve(v1) || solve(v2))
            {
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
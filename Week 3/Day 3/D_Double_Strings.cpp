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
        vector<string> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        map<string,int>freq;
        string ans(n,'0');
        for(int i = 0; i<n;i++){
            freq[a[i]]++;
        }

        for(int i =0;i<n;i++){
            if(a[i].size() == 1){
                cout<<'0';
                continue;
            }
            bool flag = false;
            for(int j =0; j<a[i].size(); j++){
                string x = a[i].substr(0,j);
                string y = a[i].substr(j,a[i].size());
                //cout<<x<<" "<<y<<endl;
                if(freq[x] > 0 && freq[y] > 0){
                    cout<<"1";
                    flag = true;
                    break;
                }
            }
            if(!flag) cout<<"0";
        }
        cout<<endl;




        // for(int i =0;i<n; i++){
        //     if(a[i].size() == 1) continue;
        //     for(int j =0; j<a[i].size()-1;j++){
        //         string x="",y = "";
        //         for(int k = 0; k<=j; k++){
        //             x.push_back(a[i][k]);
        //         }
        //         for(int k = j+1; k<a[i].size(); k++){
        //             y.push_back(a[i][k]);
        //         }
        //         //cout<<x<<" "<<y<<endl;
        //         if(x == y){
        //             if(freq[x] > 0){
        //                 ans[i] ='1';
        //                 break;
        //             }
        //         }
        //         else{
        //             if(freq[x] > 0 && freq[y] > 0){
        //                 ans[i] ='1';
        //                 break;
        //             }
        //         }
        //     }
        // }
        // cout<<ans<<endl;
    }
    return 0;
}
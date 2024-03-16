#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    for(int i = 0 ; i<m;i++){
        cin>>b[i];
    }
    int arr[n+m];
    int l = 0, r = 0 , i = 0;
    while(l < n && r < m){
        if(a[l] <= b[r]){
            arr[i] =a[l];
            l++;
        }
        else{
            arr[i] = b[r];
            r++;
        }
        i++;
    }
    for(int j = i ; j<(n+m);j++){
        if(r>=m){
            arr[j] = a[l];
            l++;
        }
        else{
            arr[j] = b[r];
            r++;
        }
    }
    for(int i = 0;i<(n+m) ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
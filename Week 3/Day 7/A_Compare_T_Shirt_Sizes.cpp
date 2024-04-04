#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        string a, b;
        cin >> a >> b;
        int la = a.size(), lb = b.size();

        if(a[la-1] == b[lb-1]) {
            if(a[la-1] == 'S') {
                cout << ((la > lb) ? "<" : (la < lb) ? ">" : "=") << endl;
            } else if(a[la-1] == 'L') {
                cout << ((la > lb) ? ">" : (la < lb) ? "<" : "=") << endl;
            } else { 
                cout << ((la > lb) ? ">" : (la < lb) ? "<" : "=") << endl;
            }
        } else {
            if(a[la-1] == 'L' && (b[lb-1] == 'S' || b[lb-1] == 'M')) {
                cout << ">" << endl;
            } else if(a[la-1] == 'S' && (b[lb-1] == 'M' || b[lb-1] == 'L')) {
                cout << "<" << endl;
            } else if(a[la-1] == 'M' && b[lb-1] == 'S') {
                cout << ">" << endl;
            } else {
                cout << "<" << endl;
            }
        }
    }
    return 0;
}

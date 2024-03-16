//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    vector<int>patFreq(26,0),txtFreq(26,0);
	    int patLen = pat.length();
	    int txtLen = txt.length();
	    int cnt = 0;
	    for(int i = 0 ;i<patLen; i++){
	        patFreq[pat[i]-'a']++;
	        txtFreq[txt[i]-'a']++;
	    }
	    for(int i= patLen; i<txtLen ;i++){
	        if(patFreq == txtFreq){
	            cnt++;
	        }
	        txtFreq[txt[i-patLen]-'a']--;
	        txtFreq[txt[i]-'a']++;
	    }
	    if(patFreq == txtFreq) cnt++;
	    return cnt;
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
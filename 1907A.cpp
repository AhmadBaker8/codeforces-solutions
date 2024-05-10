#include <bits/stdc++.h>

#define Baker ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define cin(a, n) for(ll i = 0; i < n; i++) cin >> a[i];
#define yn f?cout<<"YES\n":cout<<"NO\n";
#define ys cout << "YES" <<endl;
#define no cout << "NO" <<endl;
using namespace std;


int main() {
    Baker

    ll t = 1;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        //string res = "";
        char j = s[1];
        for (char i = 'a'; i <= 'h'; i++) {
            if (i != s[0])
                cout << i << j << endl;
        }
        char ch = s[0];
        for (int i = 1; i <= 8; ++i) {
            if (i != (s[1] - '0'))
                cout << ch << i << endl;
        }
    }


}


 

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
        int n;
        cin >> n;
        int cnt0 = 0, cnt1 = 0, cnt2 = 0, r = INT_MAX, v = INT_MAX, c = INT_MAX;
        ll sum = 0;
        while (n--) {
            int m;
            string s;
            cin >> m >> s;
            if (s[0] == '1' && s[1] == '1') {
                r = min(r, m);
            } else if (s[0] == '1' && s[1] == '0') {
                v = min(v, m);
            } else if (s[0] == '0' && s[1] == '1') {
                c = min(c, m);
            }
        }
        if (r != INT_MAX) {
            if (v != INT_MAX && c != INT_MAX)
                cout << min(r, c + v);
            else
                cout << r;
        } else {
            if (c != INT_MAX && v != INT_MAX)
                cout << v + c;
            else
                cout << -1;
        }
        cout << endl;
    }
}

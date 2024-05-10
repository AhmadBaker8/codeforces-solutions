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
        int x, y;
        cin >> x >> y;
        ll v = (x * x) + (y * y);
        ll c = ::sqrt(v);
        if (c == 0)
            cout << 0 << endl;

        else if (c * c == v)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
}

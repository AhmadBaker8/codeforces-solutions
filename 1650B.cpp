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
        ll l, r, a;
        cin >> l >> r >> a;
        ll res1, res2;
        if ((r / a) != (l / a)) {
            res1 = (r / a) + (r % a);
            res2 = ((r / a) - 1) + (a - 1);
            if (res1 > res2)
                cout << res1 << endl;
            else
                cout << res2 << endl;
        } else {
            cout << (r / a) + (r % a) << endl;
        }


    }
}

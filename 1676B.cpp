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

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        cin(a, n)
        sort(a, a + n);
        int r = a[0];
        ll res = 0;
        for (int i = 1; i < n; ++i) {
            res += (a[i] - r);
        }
        cout << res << endl;
    }

}

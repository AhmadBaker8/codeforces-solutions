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
    //cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        cin(a, n);
        sort(a, a + n);
        if (n == 2)
            cout << 0;
        else if (n == 3)
            cout << min((a[2] - a[1]), min((a[1] - a[0]), (a[2] - a[0])));
        else if (n >= 4)
            cout << min((a[n - 1] - a[1]), (a[n - 2] - a[0]));
    }
}

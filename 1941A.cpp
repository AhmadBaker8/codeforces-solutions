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
 
    int t = 1;
    cin >> t;
    while (t--) {
 
        int n, m, k;
        cin >> n >> m >> k;
        int a[n], b[m];
        cin(a, n)
        cin(b, m)
        int cnt = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (a[i] + b[j] <= k)
                    cnt++;
            }
        }
        cout << cnt << endl;
 
    }
}

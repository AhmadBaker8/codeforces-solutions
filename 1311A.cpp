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
        int sum = 0;
        int a, b;
        cin >> a >> b;
        if (a == b) {
            cout << 0 << endl;
            continue;
        } else if (a > b) {
            sum++;
            if ((a - b) % 2 != 0)
                sum++;
        } else {
            sum++;
            if ((b - a) % 2 != 1)
                sum++;
        }
        cout << sum << endl;
    }
}


 

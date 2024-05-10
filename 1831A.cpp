
#include <bits/stdc++.h>

#define Baker ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define cin(a, n) for(ll i = 0; i < n; i++) cin >> a[i];
#define cout(a, n) for(ll i = 0; i < n; i++) cout << a[i] << " ";
#define  lnn cout<<endl;
#define yn f?cout<<"YES\n":cout<<"NO\n";
#define ys cout << "YES" <<endl;
#define no cout << "NO" <<endl;
using namespace std;


int main() {

    Baker

    int t = 1;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;
        int a[n];
        cin(a, n)
        for (int i = 0; i < n; ++i) {
            if (a[i] == 1)
                cout << n << " ";
            else if (a[i] == n)
                cout << 1 << " ";
            else
                cout << (n + 1) - a[i] << " ";
        }
        lnn

    }
}




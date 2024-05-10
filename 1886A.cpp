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
    int five = 0, zero = 0;
    while (t--) {

        int n;
        cin >> n;
        if (n <= 6||n==9)
            no
        else if (n % 3 == 0) {
            cout << "YES" << endl << 1 << " " << 4 << " " << n - 5 << endl;
        } else
            cout << "YES" << endl << 1 << " " << 2 << " " << n - 3 << endl;


    }


}


 

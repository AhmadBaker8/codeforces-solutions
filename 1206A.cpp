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
   // cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int a [n];
        cin(a,n)
        int m;
        cin>>m;
        int b[m];
        cin(b,m)
        sort(a,a+n);
        sort(b,b+m);
        cout<<a[n-1]<<" "<<b[m-1]<<endl;
        
    }
}

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
        int l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        if(l2>=l1&&l2<=r1)
            cout<<l2<<endl;
        else if(l2<l1&&r2>=l1)
            cout<<l1<<endl;
        else
            cout<<l2+l1<<endl;
    }
}

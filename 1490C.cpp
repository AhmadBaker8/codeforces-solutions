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

        ll x;
        cin>>x;
        bool f=false;
        for(int i=1; pow(i,3)<x; i++)
        {
            ll sml = pow(i,3);
            ll res=cbrtl(x-sml);
            if((pow(res,3)+sml)==x){

                f=true;
                break;
            }
        }
        if(f)
            ys
        else
            no
    }
}
 

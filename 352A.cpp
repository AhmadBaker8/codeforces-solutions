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

        if (n == 0)zero++;
        else five++;
    }
        if(zero==0)cout<<-1<<endl;
        else if(five<9) cout<<0<<endl;
        else {
            five = five - (five%9);
            while(five--)cout<<5;
            while(zero--)cout<<0;
        }



}


 

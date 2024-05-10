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

    ll t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        string ss = "";
        ss = s[0];
        int x = stoi(ss);
        switch(x){
            case 1 : cout<<13<<endl;break;
            case 2 : cout<<23<<endl;break;
            case 3 : cout<<31<<endl;break;
            case 4 : cout<<41<<endl;break;
            case 5 : cout<<53<<endl;break;
            case 6 : cout<<61<<endl;break;
            case 7 : cout<<71<<endl;break;
            case 8 : cout<<83<<endl;break;
            case 9 : cout<<97<<endl;break;

        }
    }
}

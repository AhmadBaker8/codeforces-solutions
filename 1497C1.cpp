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

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n&1){
                cout<<n/2<<" "<<n/2<<" "<<1<<endl;
        }
        else{
            if((n/2)&1)
                cout<<(n/2)-1<<" "<<n/2-1<<" "<<2<<endl;
                else
                cout<<n/2<<" "<<(n/2)/2<<" "<<(n/2)/2<<endl;
        }
    }


}

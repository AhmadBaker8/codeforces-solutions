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

    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    sort(a,a+n);
    
    ll sum=0,cnt=0;
    for (int i = 0; i < n; ++i) {
        if(sum<=a[i]){
            sum+=a[i];
            cnt++;
        }
    }
    cout<<cnt<<endl;


}

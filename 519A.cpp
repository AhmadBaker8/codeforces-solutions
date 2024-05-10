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
    //cin >> t;
    while (t--) {

        char ch[8][8];
        int white = 0, black = 0;
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                cin >> ch[i][j];
                if (ch[i][j] >= 'a' && ch[i][j] <= 'z') {
                    switch (ch[i][j]) {
                        case 'q':
                            black += 9;
                            break;
                        case 'r':
                            black += 5;
                            break;
                        case 'b':
                            black += 3;
                            break;
                        case 'n':
                            black += 3;
                            break;
                        case 'p':
                            black += 1;
                            break;
                        case 'k':
                            black += 0;
                            break;
                    }
                } else if (ch[i][j] >= 'A' && ch[i][j] < 'Z') {
                    switch (ch[i][j]) {
                        case 'Q':
                            white += 9;
                            break;
                        case 'R':
                            white += 5;
                            break;
                        case 'B':
                            white += 3;
                            break;
                        case 'N':
                            white += 3;
                            break;
                        case 'P':
                            white += 1;
                            break;
                        case 'K':
                            white += 0;
                            break;
                    }
                } else {
                    continue;
                }
            }
        }
        if (black == white)cout << "Draw" << endl;
        else if (black > white)cout << "Black" << endl;
        else cout << "White" << endl;


    }
}


 

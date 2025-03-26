#include <bits/stdc++.h>

#define MAXN 100006
#define MOD 1000000007
#define all(v) v.begin(), v.end()

#define d1(x) cout << x << "\n"
#define d2(a, b) cout << "Entre -> " << a << " " << b << "\n"
#define d3(a, b, c) cout << "Entre -> " << a << " " << b << " " << c << "\n"

using namespace std;
typedef long long int ll;
string op[]{"NO", "YES"};

/*      呪いの王、両面宿儺         */

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        ll b, c, d;
        cin >> b >> c >> d;

        ll a = 0;
        bool si = true;
        for (int i = 0; i <= 61; i++) {
            if (d & (1ll << i)) {
                if (!(b & (1ll << i)) && (c & (1ll << i))) {
                    cout << "-1\n";
                    si = false;
                    break;
                }
                if (!(b & (1ll << i))) a |= 1ll << i;

            } else {
                if ((b & (1ll << i)) && !(c & (1ll << i))) {
                    cout << "-1\n";
                    si = false;
                    break;
                }
                if ((b & (1ll << i)) && (c & (1ll << i))) a |= 1ll << i;
            }
        }

        if(si) cout << a << "\n";

    }

    return 0;
}

/*

/\_/\
 ^-^    Paca, paca, paca, paca en mi caballo
 >/<

https://codeforces.com/contest/2020/problem/C

*/

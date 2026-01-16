#include <iostream>
using namespace std;

#define ll long long
const int Mod = 1e9 + 7;

ll fxn(ll base, ll exponent, ll mod = Mod) {
    base %= mod;
    if (exponent == 0) return 1;

    ll res = fxn(base, exponent / 2, mod);
    res = (res * res) % mod;

    if (exponent % 2 == 1)
        res = (res * base) % mod;

    return res;
}

int main() {
    while (true) {
        ll a, b, c;
        cin >> a >> b >> c;

        if (a == -1 && b == -1 && c == -1)
            break;

        if (a % Mod == 0) {
            if (b == 0 && c > 0) cout << 1 << endl;
            else cout << 0 << endl;
            continue;
        }

        ll ans = fxn(b, c, Mod - 1);
        cout << fxn(a, ans, Mod) << endl;
    }

    return 0;
}

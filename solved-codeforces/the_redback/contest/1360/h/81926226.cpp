/***
 *                                   ____
 *       ____ ___  ____ ________  __/ __/
 *      / __ `__ \/ __ `/ ___/ / / / /_
 *     / / / / / / /_/ / /  / /_/ / __/
 *    /_/ /_/ /_/\__,_/_/   \__,_/_/
 *
 *    @link : https://maruftuhin.com
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define xx        first
#define yy        second
#define pb(x)     push_back(x)
#define all(x)    x.begin(), x.end()
#define allr(x)   x.rbegin(), x.rend()
#define mem(a, b) memset(a, b, sizeof(a))
#define inf       1e9
#define eps       1e-9
#define mod       1000000007
#define NN        100010

/* -------------------------------------------------------------------------- */
/*                              Debugging Macros                              */
/* -------------------------------------------------------------------------- */
#ifdef redback
#include "prettyprint.hpp"
#define dbg(...)                        \
    cout << "L-" << __LINE__ << " :: "; \
    _print_out(#__VA_ARGS__, __VA_ARGS__);
template <typename T>
void _print_out(const char* name, T&& arg1) {
    cout << name << " = " << arg1 << endl;
}
template <typename T1, typename... Args>
void _print_out(const char* names, T1&& arg1, Args&&... args) {
    const char* comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " = " << arg1 << " | ";
    _print_out(comma + 1, args...);
}
template <typename T>
void _print_out(const char* name, T a[], int n) {
    cout << name << " = " << pretty_print_array(a, n) << endl;
}
#else
#define dbg(args...)
#endif
/* -------------------------------------------------------------------------- */

ll binaryToDecimal(string bi) {
    ll ans = 0;
    ll carry = 1;

    for (int i = bi.size() - 1; i >= 0; i--) {
        if (bi[i] == '1') {
            ans += carry;
        }
        carry = carry << 1;
    }
    return ans;
}

void solve() {
    ll i, j, k;
    ll n, m;
    cin >> n >> m;
    map<ll, ll> mp;

    ll limit = 1ll << m;
    limit--;
    k = (limit - n) / 2;
    string str;

    for (i = 0; i < n; i++) {
        cin >> str;
        ll dec = binaryToDecimal(str);
        mp[dec] = 1;
        if (dec <= k) {
            k++;
        }

        while (mp.find(k) != mp.end()) {
            k++;
        }
    }

    for (i = m - 1; i >= 0; i--) {
        if (k & 1ll << i) {
            cout << "1";
        } else {
            cout << "0";
        }
    }

    cout << "\n";
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t = 1, tc;
    cin >> tc;
    ll n, m;
    while (tc--) {
        solve();
    }
    return 0;
}

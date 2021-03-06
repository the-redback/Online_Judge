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
#define mem(a, b) memset(a, b, sizeof(a))
#define inf       1e9
#define eps       1e-9
#define mod       1000000007
#define NN        200010

// clang-format off
#ifdef  redback
#define bug printf("line=%d\n",__LINE__);
#define debug(args...) {cout<<":: "; dbg,args; cout<<endl;}
struct  debugger {template<typename T>debugger& operator , (const T& v) {cout << v << " "; return *this;}} dbg;
#else
#define bug
#define debug(args...)
#endif  //debugging macros
// clang-format on

void solve(string str) {
    ll i, j, k;
    ll m, n;
    ll fl = 0;
    for (i = 0; i < str.size() - 1; i++) {
        if (str[i] == '1') {
            cout << '1';
        } else {
            if (fl == 0) {
                fl = 1;
                continue;
            }
            cout << '0';
        }
    }
    if (fl) {
        cout << str[str.size() - 1];
    }

    cout << "\n";
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t = 1, tc;
    // cin >> tc;
    ll     n, m;
    string str;
    while (cin >> str) {
        solve(str);
    }
    return 0;
}

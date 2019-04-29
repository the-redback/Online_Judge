/***
 *                                   ____
 *       ____ ___  ____ ________  __/ __/
 *      / __ `__ \/ __ `/ ___/ / / / /_
 *     / / / / / / /_/ / /  / /_/ / __/
 *    /_/ /_/ /_/\__,_/_/   \__,_/_/
 *
 *    @link : https://maruftuhin.com
 */

#include "bits/stdc++.h"

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

#define ft           first
#define sd           second
#define mp           make_pair
#define pb(x)        push_back(x)
#define all(x)       x.begin(),x.end()
#define allr(x)      x.rbegin(),x.rend()
#define mem(a, b)    memset(a,b,sizeof(a))
#define sf(a)        scanf("%lld",&a)
#define ssf(a)       scanf("%s",a)
#define sf2(a, b)    scanf("%lld %lld",&a,&b)
#define sf3(a, b, c) scanf("%lld %lld %lld",&a,&b,&c)
#define inf          1e9
#define eps          1e-9
#define mod          1000000007
#define NN           100010


#ifdef  redback
#define bug printf("line=%d\n",__LINE__);
#define debug(args...) {cout<<":: "; dbg,args; cout<<endl;}
struct  debugger {template<typename T>debugger& operator , (const T& v) {cout << v << " "; return *this;}} dbg;
#else
#define bug
#define debug(args...)
#endif  //debugging macros


int main() {
    ios::sync_with_stdio(false); cin.tie(0);
#ifdef redback
    // freopen("input.in", "r", stdin);
    // freopen("output.in", "w", stdout);
#endif

    ll t = 1, tc;
    ll w;
    cin >> tc >> w;
    ll n, m;
    while (tc--) {
        ll i, j, k;
        ll x, y;
        ll a, b, c, d, e, f;
        ll d1, d2, d3, d4, d5, d6, d7;
        cout << "7\n";
        cout.flush();
        cin >> d7;

        cout << "6\n";
        cout.flush();
        cin >> d6;
        a = (d7 - d6) / 64;

        cout << "1\n";
        cout.flush();
        cin >> d1;
        x = d1 - a;

        cout << "2\n";
        cout.flush();
        cin >> d2;
        b = d2 - (3 * a) - x;

        cout << "4\n";
        cout.flush();
        cin >> d4;
        y = d4 - (15 * a) - 3 * b - x; // c+d

        cout << "5\n";
        cout.flush();
        cin >> d5;
        e = d5 - (31 * a) - (3 * b) - y - x;

        f = x - a - b - y - e;

        d = (d6 - (63 * a) - 7 * b - e - f - x - 3 * y) / (-2);

        c = x - a - b - d - e - f;

        cout << a << " " <<   b << " " << c << " " << d << " " << e << " " << f << "\n";
        cout.flush();
        cin >> k;
        if (k == -1) {
            return 0;
        }

    }
    return 0;
}
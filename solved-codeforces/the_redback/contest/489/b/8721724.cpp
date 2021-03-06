/**
 *    @author     : Maruf Tuhin
 *    @College    : CUET CSE 11
 *    @Topcoder   : the_redback
 *    @CodeForces : the_redback
 *    @UVA        : the_redback
 *    @link       : http://www.fb.com/maruf.2hin
 */

#include <bits/stdc++.h>

using namespace std;

typedef long long          ll;
typedef unsigned long long llu;

#define ft        first
#define sd        second
#define mp        make_pair
#define pb(x)     push_back(x)
#define all(x)    x.begin(),x.end()
#define allr(x)   x.rbegin(),x.rend()
#define mem(a,b)  memset(a,b,sizeof(a))
#define inf       1e9
#define eps       1e-9
#define mod       1000000007
#define NN        30100

//#define read(a)   scanf("%lld",&a)

ll a[300],b[300];

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1,tc;
    //cin>>tc;
    ll i,j,k,l,m,n;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];
    cin>>m;
    for(i=0; i<m; i++)
        cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    ll  cnt=0;
    for(i=0,j=0; i<n && j<m;)
    {
        if(abs(a[i]-b[j])<=1)
        {
            cnt++;
            i++;
            j++;
        }
        else if(a[i]>b[j])
        {
            j++;
        }
        else
            i++;
    }
    cout<<cnt<<"\n";
    return 0;
}


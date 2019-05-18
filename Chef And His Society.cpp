#include<bits/stdc++.h>
using namespace std;
#define           ll               long long int
#define           pb               push_back
#define           pii              pair < ll, ll>

vector<ll>v;
vector<pii>v4;

ll binarySearch(ll l, ll r,ll y,ll res)
{
    ll x,a,b,c,i,m,t,s=0;
    while (l <= r)
    {
        m = l + (r - l) / 2;
        a=0;
        for(i=0; i<y; i++)
        {
            t=v[i]-m;
            a=a+max(t,s);
        }
        if (a >= res)
        {
            l = m + 1;
            v4.pb(make_pair(m,a));
        }
        else
            r = m - 1;
    }
}

int main()
{
    ll test,N,E,a,sum,i,mx,tt;
    scanf("%lld", &test);
    while(test--)
    {
        scanf("%lld %lld\n",&N, &E);
        for(i=0; i<N; i++)
        {
            scanf("%lld", &a);
            v.pb(a);
        }
        sort(v.begin(),v.end());
        mx=v[N-1];
        binarySearch(0,mx,N,E);
        pii s=*max_element(v4.begin(),v4.end());
        printf("%lld %lld\n",s.first,s.second);
        v.clear();
        v4.clear();
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define           ll               long long int
#define           pb               push_back


vector<ll>v,v2;

ll fun(ll a)
{
    v2.clear();
    ll cnt=0;
    v2.pb(v[0]);
    for(ll i=1;i<a;i++){
        if(v[i]>=v2.back()){
            v2.pb(v[i]);
        }
        else{
            cnt++;
            ll x=lower_bound(v2.begin(),v2.end(),v[i])-v2.begin();
            v2[x]=v[i];
        }
    }
    return cnt;
}

int main()
{
    ll a,b,c,d,i,j;
    cin>>a;
    for(j=0; j<a; j++)
    {
        cin>>b;
        v.pb(b);
    }

    b=fun(a);
    reverse(v.begin(),v.end());
    c=fun(a);

    if(b>c){
        cout<<"Sriram\n"<<c;
    }
    else if(c>b){
        cout<<"Ajeyaa\n"<<b;
    }
    else{
        cout<<"Both\n"<<b;
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

#define           CIN              ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define           ll               long long int
#define           pb               push_back
vector<ll>v,v1;
int main()
{
    ll a,b,i,h,c,sum=0;
    cin>>a>>b;
    for(i=0;i<a;i++){
        cin>>c;
        v.pb(c);
    }
    sort(v.begin(),v.end());
    for(i=0;i<a;i++){
        sum=sum+v[i];
        v1.pb(sum);
    }
    for(i=0;i<b;i++){
        cin>>c;
        h=upper_bound(v1.begin(),v1.end(),c)-v1.begin();
        cout<<h<<endl;
    }
    return 0;
}

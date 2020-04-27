#include<bits/stdc++.h>
using namespace std;
#define  ll             long long int
ll ara[205];
ll LIS(ll n)
{
    ll temp[n+2],res[n+2],val[n+2],sz=1,i,j;
    memset(res,-1,sizeof res);
    temp[0]=0;
    val[0]=ara[0];
    for( i = 1 ; i < n ; i++)
    {
        ll indx = upper_bound(val,val+sz,ara[i])-val;
        val[indx]=ara[i];
        temp[indx]=i ;
        if(indx!=0) res[i] = temp[indx-1];
        if(indx==sz) sz++;
    }
    return sz ;
}
int main()
{
    ll a, i,T;
    cin>>T ;
    while(T--){
    cin >> a ;
    for( i = 0 ; i < a ; i++) cin >> ara[i];
    cout<<LIS(a)<<endl;
    }
    return 0 ;
}
//https://www.codechef.com/problems/PEC005

#include<bits/stdc++.h>
using namespace std;
#define           ull              unsigned long long int
#define           pb               push_back

ull ara[25];

int main()
{
    ull  a , k , i ;
    ara[0]=1;
    ara[1]=1;
    for(i = 2 ; i <= 20 ; i++)
    {
        ara[i]=ara[i-1]*i;
    }

    cin >> a ;
    while(a--)
    {
        cin >> k ;
        cout<<ara[k]<<endl;
    }
    return 0 ;
}

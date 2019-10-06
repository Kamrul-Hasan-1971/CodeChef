#include<bits/stdc++.h>
using namespace std;
#define           ll               long long int
#define           pb               push_back

int main()
{
    ll a, b, i, j ;
    cin >> a ;
    while(a--)
    {
        cin>> b ;
        for(i=b+1;;i++)
        {
            j=i;
            ll cnt=0;
            while(j)
            {
                ll p = j%10;
                if(p==3) cnt++;
                j/=10;
            }
            if(cnt>=3) break;
        }
        cout<<i<<endl;
    }
    return 0;
}


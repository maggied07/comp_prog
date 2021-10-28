#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    IOS;
    ll t;
    cin>>t;
    while (t--)
    {
        ll a,b;
        cin>>a>>b;
        if(a>0&&b>0)
        cout<<"Solution"<<endl;
        if(a==0&&b>0)
        cout<<"Liquid"<<endl;
        if(a>0&&b==0)
        cout<<"Solid"<<endl;
    }
}
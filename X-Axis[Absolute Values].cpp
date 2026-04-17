//                     By the grace of Allah                           //
//#include<iostream>
//#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int res=0,tc;cin>>tc;
    stringstream coutt;
    while(tc--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a>b) swap(a,b);
        if(a>c) swap(a,c);
        if(b>c) swap(b,c);
        res = abs(a-b)+abs(b-b)+abs(c-b);
        coutt<<res<<endl;
    }
    cout<<coutt.str();
    return 0;
}
//     Alhamdulillah      //

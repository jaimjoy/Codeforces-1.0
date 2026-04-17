//                     By the grace of Allah                           //
#include<bits/stdc++.h>
//#include<cmath>
//#include<iostream>
using namespace std;

int main()
{
    stringstream coutt;
    int tc;cin>>tc;
    while(tc--)
    {
        int a,b,c,d,res=0;
        cin>>a>>b>>c>>d;
        if(a<b) res++;
        if(a<c) res++;
        if(a<d) res++;
        coutt<<res<<endl;
    }
    cout<<coutt.str();
    return 0;
}
//            Alhamdulillah                //

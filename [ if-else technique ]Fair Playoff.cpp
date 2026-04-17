//                     By the grace of Allah                           //
//#include<iostream>
//#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;cin>>tc;
    stringstream coutt;
    while(tc--)
    {
        int a,b,c,d;cin>>a>>b>>c>>d;
        if(a<b) swap(a,b);
        if(c<d) swap(c,d);
        /*if(b>c && b>d) coutt<<"NO"<<endl;
        else if(d>a && d>b) coutt<<"NO"<<endl;
        else coutt<<"YES"<<endl;*/
        if(b>c)
        {
            if(b>d) coutt<<"NO"<<endl;
            else coutt<<"YES"<<endl;
        }
        else if(d>a)
        {
            if(d>b) coutt<<"NO"<<endl;
            else coutt<<"YES"<<endl;
        }
        else coutt<<"YES"<<endl;
    }
    cout<<coutt.str();
    return 0;
}
//     Alhamdulillah      //

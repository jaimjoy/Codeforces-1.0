//                     By the grace of Allah                           //
//#include<iostream>
//#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;cin>>test;
    stringstream coutt;
    while(test--)
    {
        int a,b,c,d;
        bool cFound = false, dFound = false;
        cin>>a>>b>>c>>d;
        if(a>b) swap(a,b);
        if(c>d) swap(c,d);
        if(a<b)
        {
            cFound = (c>a&&c<b);
            dFound = (d>a&&d<b);
        }
        else
        {
            cFound = (c>a||c<b);
            dFound = (d>a||d<b);
        }
        if(cFound == dFound) coutt<<"NO"<<endl;
        else coutt<<"YES"<<endl;
    }
    cout<<coutt.str();
    return 0;
}
//     Alhamdulillah      //

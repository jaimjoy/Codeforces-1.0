//                     By the grace of Allah                           //
//#include<iostream>
//#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,a,b,c;cin>>test;
    stringstream coutt;
    while(test--)
    {
        cin>>a>>b>>c;
        if(a>b) swap(a,b);
        if(a>c) swap(a,c);
        if(b>c) swap(b,c);

        if(b+c >= 10) coutt<<"YES"<<endl;
        else coutt<<"NO"<<endl;
    }
    cout<<coutt.str();
    return 0;
}
//     Alhamdulillah      //

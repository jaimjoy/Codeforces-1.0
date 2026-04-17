//                     By the grace of Allah                           //
//#include<iostream>
//#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,test;cin>>test;
    stringstream coutt;
    while(test--)
    {
        cin>>a>>b>>c;
        if(a<b && a<c && b<c) coutt<<"STAIR"<<endl;
        else if(b>a && b>c) coutt<<"PEAK"<<endl;
        else coutt<<"NONE"<<endl;
    }
    cout<<coutt.str();
    return 0;
}
//     Alhamdulillah      //

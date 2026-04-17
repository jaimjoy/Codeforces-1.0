//                     By the grace of Allah                           //
//#include<iostream>
//#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,t;cin>>t;
    char *pm = new char[t];
    for(int i=0; i<t; i++)
    {
        cin>>a>>b>>c;
        if(a+b == c) pm[i] = '+';
        else pm[i] = '-';
    }
    for(int i=0; i<t; i++) cout<<pm[i]<<endl;
    return 0;
}
//     Alhamdulillah      //

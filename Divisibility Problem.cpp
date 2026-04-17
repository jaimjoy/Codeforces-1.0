//                     By the grace of Allah                           //
//#include<iostream>
//#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int tc;cin>>tc;
    stringstream coutt;
    while(tc--)
    {
        int a,b,noob=0;cin>>a>>b;
        if(a%b == 0) coutt<<noob<<endl;
        else
        {
            noob = (a/b)*b + b - a;
            coutt<<noob<<endl;
        }
    }
    cout<<coutt.str();
    return 0;
}
//     Alhamdulillah      //

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
        int res=0,n;cin>>n;
        if(n%4 == 0) coutt<<n/4<<endl;
        else coutt<<n/4+1<<endl;
    }
    cout<<coutt.str();
    return 0;
}
//            Alhamdulillah                //

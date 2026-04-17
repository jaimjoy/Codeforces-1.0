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
        string s;
        cin>>s;
        if(s=="c"||s=="o"||s=="d"||s=="e"||s=="f"||
           s=="o"||s=="r"||s=="c"||s=="e"||s=="s")
             coutt<<"YES"<<endl;
        else coutt<<"NO"<<endl;
    }
    cout<<coutt.str();
    return 0;
}
//     Alhamdulillah      //

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
        string card;cin>>card;
        if(card == "abc" ||
           card == "bac" ||
           card == "acb" ||
           card == "cba")coutt<<"YES"<<endl;
        else coutt<<"NO"<<endl;
    }
    cout<<coutt.str();
    return 0;
}
//     Alhamdulillah      //

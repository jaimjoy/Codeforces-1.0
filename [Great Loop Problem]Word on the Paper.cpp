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
        char *f = new char[8];
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                cin>>f[j];
                if(f[j] != '.') coutt<<f[j];
            }
        }
        coutt<<endl;
    }
    cout<<coutt.str();
    return 0;
}
//     Alhamdulillah      //

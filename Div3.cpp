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
        int a,b,c,k=5;cin>>a>>b>>c;
        while(k--)
        {
            if(a<=b && a<=c) a++;
            else if(b<=c && b<=a) b++;
            else c++;
        }
        coutt<<a*b*c<<endl;
    }
    cout<<coutt.str();
    return 0;
}
//     Alhamdulillah      //

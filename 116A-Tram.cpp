//                     By the grace of Allah                           //
//#include<iostream>
//#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c=0,F=0,t;cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>a>>b;
        if(i==0) F = c = b;
        else
        {
            if(c<(c-a+b))
            {
                if(F<c-a+b) F = c-a+b;
                c = c-a+b;
            }
            else if(c>(c-a+b)) c = c-a+b;
        }
    }
    cout<<F;
    return 0;
}
//     Alhamdulillah      //

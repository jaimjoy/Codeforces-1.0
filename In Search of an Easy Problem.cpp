//                     By the grace of Allah                           //
#include<iostream>
//#include<cmath>
//#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cc=0,test;cin>>test;
    int *a = new int[test];
    for(int i=0; i<test; i++)
    {
        cin>>a[i];
        if(a[i] == 1) cc=1;
    }
    if(cc == 1) cout<<"HARD";
    else cout<<"EASY";
    return 0;
}
//     Alhamdulillah      //

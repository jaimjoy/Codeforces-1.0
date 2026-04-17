//                     By the grace of Allah                           //
//#include<iostream>
//#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cc=0,n;cin>>n;
    int *drinks = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>drinks[i];
        cc += drinks[i];
    }
    float change = float(n);
    float t = cc/change;
    cout<<t;
    return 0;
}
//     Alhamdulillah      //

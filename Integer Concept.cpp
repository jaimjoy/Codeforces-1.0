//                     By the grace of Allah                           //
//#include<iostream>
//#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int temp,a,b,c,d,year;cin>>year;
    do
    {
        ++year;
        temp = year;
        a = temp%10;temp /= 10;
        b = temp%10;temp /= 10;
        c = temp%10;temp /= 10;
        d = temp%10;temp /= 10;
    }
    while(a==b || a==c || a==d || b==c || b==d || c==d);
    cout<<year;
    return 0;
}
//     Alhamdulillah      //

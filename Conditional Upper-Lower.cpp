//                     By the grace of Allah                           //
//#include<iostream>
//#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string l;cin>>l;
    int small=0,upper=0,siz = l.size();
    for(int i=0; i<siz; i++)
    {
        if(l[i]>90) small++;
        else upper++;
    }
    //Slow execution
    /*for(int i=0; i<siz; i++)
    {
        if(upper>small) l[i] = toupper(l[i]);
        else l[i] = tolower(l[i]);
    }*/
    //Quite fast execution
    if (upper>small) transform(l.begin(),l.end(),l.begin(),::toupper);
    else transform(l.begin(),l.end(),l.begin(),::tolower);
    cout<<l;
    return 0;
}
//     Alhamdulillah      //

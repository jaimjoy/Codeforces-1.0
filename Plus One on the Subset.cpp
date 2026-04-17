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
        int k;cin>>k;
        int *a = new int[k];
        for(int i=0; i<k; i++) cin>>a[i];
        int maX=a[0],miN=a[k-1];
        for(int i=0; i<k; i++)
        {
            if(a[i]>maX) maX = a[i];
            else if(a[i]<miN) miN = a[i];
        }
        coutt<<maX-miN<<endl;
    }
    cout<<coutt.str();
    return 0;
}
//     Alhamdulillah      //

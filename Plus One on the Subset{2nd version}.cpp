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
        sort(a,a+k);
        coutt<<a[k-1]-a[0]<<endl;
    }
    cout<<coutt.str();
    return 0;
}
//     Alhamdulillah      //

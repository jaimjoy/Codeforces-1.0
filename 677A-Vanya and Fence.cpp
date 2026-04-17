//                     By the grace of Allah                           //
//#include<iostream>
//#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c=0,cc=0,n,h;cin>>n>>h;
    int *a = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]<=h) c+=1;
        else cc += 2;
    }
    cout<<c+cc<<endl;
    return 0;
}
//     Alhamdulillah      //

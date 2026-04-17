//                     By the grace of Allah                           //
//#include<iostream>
//#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;cin>>test;
    string a,b;
    stringstream coutt;
    while(test--)
    {
        cin>>a>>b;
        swap(a[0],b[0]);
        coutt<<a<<" "<<b<<endl;
    }
    cout<<coutt.str();
    return 0;
}
//     Alhamdulillah      //

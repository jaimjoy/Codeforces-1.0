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
        int sum=0, sumagain=0, k;cin>>k;
        char a[k][k];
        for(int i=0; i<k; i++)
        {
            for(int j=0; j<k; j++)
            {
                cin>>a[i][j];
                sum += a[i][j]- '0';
            }
        }
        bool found = false;
        for(int i=0; i<k && !found; i++)
        {
            for(int j=0; j<k; j++)
            {
                if(a[i][j] == '1') sumagain += 1;
            }
            if(sumagain>0) found = true;
        }
        if(sum == sumagain*sumagain) coutt<<"SQUARE"<<endl;
        else coutt<<"TRIANGLE"<<endl;
    }
    cout<<coutt.str();
    return 0;
}
//     Alhamdulillah      //

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
        int x=0,y=0,tc1;cin>>tc1;
        char *movee = new char[tc1];
        bool a = false,b = false;
        for(int i=0; i<tc1; i++)
        {
            cin>>movee[i];
                 if(movee[i] == 'R') x++;
            else if(movee[i] == 'L') x--;
            else if(movee[i] == 'U') y++;
            else if(movee[i] == 'D') y--;

            if(x==1 && y==1) a=true;
        }
        if(a) coutt<<"YES"<<endl;
        else coutt<<"NO"<<endl;
    }
    cout<<coutt.str();
    return 0;
}
//     Alhamdulillah      //

//                     By the grace of Allah                           //
//#include<bits/stdc++.h>
//#include<cmath>
#include<iostream>
using namespace std;

int main()
{
    int tc,Count=0,AgainCount=0;cin>>tc;
    int *wantPeace = new int[tc];
    for(int i=0; i<tc; i++)
    {
        cin>>wantPeace[i];
        if(wantPeace[i] == -1)
        {
            if(AgainCount == 0) Count++;
            else if(AgainCount > 0) AgainCount += wantPeace[i];
        }
        else AgainCount += wantPeace[i];
    }
    cout<<Count<<endl;
    /*stringstream coutt;
    while(tc--)
    {
    }
    cout<<coutt.str();*/
    return 0;
}
//            Alhamdulillah                //

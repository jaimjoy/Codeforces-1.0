#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc,sto=0,res=0;cin>>tc;
    int *turret = new int[tc];
    for(int i=0; i<tc; i++) cin>>turret[i];
    for(int i=0; i<tc-1; i++)
    {
        sto += turret[i]+turret[i+1];
        turret[i+1] = turret[i]+turret[i+1];
    }
    cout<<sto<<endl;
    //for(int i=0; i<tc; i++) cout<<turret[i]<<" ";
    return 0;
}


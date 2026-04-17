//                     By the grace of Allah                           //
#include<bits/stdc++.h>
//#include<cmath>
//#include<iostream>
using namespace std;

int main()
{
    stringstream coutt;
    int tc;cin>>tc;
    while(tc--)
    {
        int n,k;cin>>n>>k;
        char grid[n][n];
        int m = n/k;
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                cin>>grid[i][j];

        if(m ==1) coutt<<grid[0][0]<<endl;
        else if(m == n)
        {
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    coutt<<grid[i][j];
                }
                coutt<<endl;
            }
        }
        else
        {
            char newgrid[m][m];
            int t=0;
            for(int i=0; i<n; i+=k)
            {
                int y=0;
                for(int j=0; j<n; j+=k)
                {
                    newgrid[t][y] = grid[i][j];
                    y++;
                }
                    t++;
            }
            for(int i=0; i<m; i++)
            {
                for(int j=0; j<m; j++)
                {
                    coutt<<newgrid[i][j];
                }
                coutt<<endl;
            }
        }
    }
    cout<<coutt.str();
    return 0;
}
//            Alhamdulillah                //

#include<bits/stdc++.h>
using namespace std;
#define nl endl
int main()
{
    /*
    1 2 3 4
    0 1 0 1
    1 2 3 4
    */
    /// r1,c1=(1,2) and r2,c2=(2,3) -->> result will be = 6

    int n,m;cin>>n>>m;
    int ar[n+1][m+1];
    memset(ar, 0, sizeof ar);
    for(int i=1; i<=n; i++) for(int j=1; j<=m; j++) cin>>ar[i][j];

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            //left element + up element - left corner element + current value
            ar[i][j] += ar[i-1][j] + ar[i][j-1] - ar[i-1][j-1];
        }
    }
    while(1)
    {
        int r1,c1,r2,c2;cin>>r1>>c1>>r2>>c2;
        int res = ar[r2][c2] - ar[r1-1][c2] - ar[r2][c1-1] + ar[r1-1][c1-1];
        cout<<"ans: "<<res<<endl;
    }

    return 0;
}

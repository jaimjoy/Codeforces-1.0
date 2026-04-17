//                                By the name of Allah                           //
#include<bits/stdc++.h>
#include<queue>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl    '\n'
#define YES     {cout<<"YES"<<endl;}
#define NO      {cout<<"NO"<<endl;}
#define pb      push_back
#define ff      first
#define ss      second
#define bb      .begin()
#define ee      .end()
#define rb      .rbegin()
#define re      .rend()

//Yummy Functions
int gcd(int a, int b){ if(b==0) return a; return gcd(b,a%b); }
int lcm(int a, int b){ return ( (a/gcd(a,b))*b ); }

const int mx = 2e5+123;//max limit
int p[mx];
int a[mx];
int b[mx];

int main()
{
    optimize();
    int n;cin>>n;
    for(int i=1; i<=n; i++) cin>>p[i];
    for(int i=1; i<=n; i++) cin>>a[i];
    for(int i=1; i<=n; i++) cin>>b[i];

    priority_queue<int, vector<int>, greater<int> > q[5][5];//Array of Queue
    for(int i=1; i<=n; i++)
    {
        q[a[i]][b[i]].push(p[i]);
    }

    int m;cin>>m;
    while(m--)
    {
        int c;cin>>c;
        int ans = INT_MAX;
        int f,b;//front--back
        for(int i=1; i<=3; i++)
        {
            if(!q[c][i].empty() && q[c][i].top() < ans)
            {
                ans = q[c][i].top();//for C1 = 2 --> ans = 200
                f = c;
                b = i;
            }
        }
        for(int i=1; i<=3; i++)
        {
            if(!q[i][c].empty() && q[i][c].top() < ans)
            {
                ans = q[i][c].top();
                f = i;
                b = c;
            }
        }
        if(ans == INT_MAX) ans = -1;
        else q[f][b].pop();

        cout<<ans<<" ";
    }

    return 0;
}
//            Alhamdulillah                //

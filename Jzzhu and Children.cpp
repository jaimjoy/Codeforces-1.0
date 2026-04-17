//                                By the name of Allah                           //
#include<bits/stdc++.h>
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
#define ll      long long

//Yummy Functions
int gcd(int a, int b){ if(b==0) return a; return gcd(b,a%b); }
int lcm(int a, int b){ return ( (a/gcd(a,b))*b ); }

//////////////////////////////Main Code/////////////////////////////////

void solve()
{
    int n,m;cin>>n>>m;
    int ans=0;
    queue<pair<int, int>> q;
    for(int i=1; i<=n; i++)
    {
        int a;cin>>a;
        q.push({a,i});
    }
    while(!q.empty())
    {
        int temp = q.front().ff;
        int indx = q.front().ss;
        q.pop();

        temp -= m;
        if(temp > 0) q.push({temp, indx});
        else ans = indx;
    }
    cout<<ans;
}

int main()
{
    optimize();
    solve();
    //int tc;cin>>tc;
    //while(tc--) solve();

    return 0;
}
//            Alhamdulillah                //

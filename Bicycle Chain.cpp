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
    int n,m;
    map<int, int> mp;

    cin>>n;
    vector<int> pedal(n);
    for(int i=0; i<n; i++) cin>>pedal[i];

    cin>>m;
    vector<int> rear(m);
    for(int i=0; i<m; i++) cin>>rear[i];

    int mx=INT_MIN;
    for(int i=0; i<n; i++)
    {
        int sto = pedal[i];
        for(int j=0; j<m; j++)
        {
            if(rear[j] % sto == 0)
            {
                int tmp = rear[j]/sto;
                mp[tmp]++;
                mx = max(mx, tmp);
            }
        }
    }
    for(auto &u:mp) if(u.ff == mx) cout<<u.ss;
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

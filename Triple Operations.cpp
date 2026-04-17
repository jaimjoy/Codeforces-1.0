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

//Yummy Functions
int gcd(int a, int b){ if(b==0) return a; return gcd(b,a%b); }
int lcm(int a, int b){ return ( (a/gcd(a,b))*b ); }

///////////////////////////Main Code////////////////////////////////

const int mx = 2e5+123;
vector<long long> precalc(mx);

void solve()
{
    int l,r;cin>>l>>r;
    int a = l;
    long long ans = 0;
    while(a != 0)
    {
        a /= 3;
        ans++;
    }
    ans *= 2;
    ans += precalc[r]-precalc[l];
    cout<<ans<<endl;
}

int main()
{
    optimize();

    for(int i=1; i<=mx; i++)
    {
        int sto = i;
        long long cnt = 0;
        while(sto != 0)
        {
            sto /= 3;
            cnt++;
        }
        precalc[i] = cnt;
    }
    for(int i=1; i<=mx; i++) precalc[i] += precalc[i-1];// Prefix Sum

    int tc;cin>>tc;
    while(tc--) solve();

    return 0;
}
//            Alhamdulillah                //

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

int lcm(int a, int b){ return ( (a/__gcd(a,b))*b ); }

//////////////////////////////Main Code/////////////////////////////////

void solve()
{
    int n,r;cin>>n>>r;
    vector<int> v(n);
    int sum=0;
    for(auto &u:v) cin>>u, sum += u;
    int vacant = 2*r - sum;
    int bad=0;
    for(int i=0; i<n; i++)
    {
        if(v[i]%2 == 1)
        {
            if(vacant > 0) vacant--;
            else bad++;
        }
    }
    cout<<sum-bad<<endl;
}

int main()
{
    optimize();
    //solve();
    int tc;cin>>tc;
    while(tc--) solve();

    return 0;
}
//            Alhamdulillah                //

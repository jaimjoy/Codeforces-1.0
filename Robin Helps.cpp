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
    int n,k;cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    int robin=0;
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(v[i] == 0 && robin > 0)
        {
            robin--;
            cnt++;
        }
        else if(v[i] >= k) robin += v[i];
    }
    cout<<cnt<<endl;
}

int main()
{
    optimize();
    int tc;cin>>tc;
    while(tc--) solve();

    return 0;
}
//            Alhamdulillah                //

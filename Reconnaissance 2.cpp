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
    int n;cin>>n;
    int ar[n+1];
    int temp=INT_MAX,f=0,s=0;

    for(int i=1; i<=n; i++) cin>>ar[i];

    for(int i=1; i<n; i++)
    {
        int res = abs(ar[i]-ar[i+1]);
        if(res < temp)
        {
            temp = res;
            f = i;
            s = i+1;
        }
    }
    if(abs(ar[n]-ar[1]) < temp) cout<<n<<" "<<1;
    else cout<<f<<" "<<s;
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

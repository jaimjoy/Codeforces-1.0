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

const int mx = 1e9+123;

void solve()
{
    int n;cin>>n;
    int res=0;

    if(n==1)
    {
        int a;
        cin>>a;
        cout<<"0";
        exit(0);
    }

    int ar[n];
    for(int i=0; i<n; i++) cin>>ar[i];
    int mn = min(ar[0],ar[1]), mx = max(ar[0],ar[1]);

    if(mn > mx) res++;
    else if(mn < mx) res++;

    for(int i=2; i<n; i++)
    {
        if(ar[i] < mn && ar[i] < mx)
        {
            mn = ar[i];
            res++;
        }
        else if(ar[i] > mn && ar[i] > mx)
        {
            mx = ar[i];
            res++;
        }
    }
    cout<<res;
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

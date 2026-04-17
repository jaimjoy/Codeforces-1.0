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
    vector<int> v(n);
    ll sum=0;
    ll op=0;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i] < 0) sum -= v[i];
        else sum += v[i];
    }

    ll l=0, cnt=0;
    while(l < n)
    {
        if(v[l] < 0)
        {
            cnt++;
            while(l<n && v[l]<=0) l++;
        }
        else l++;
    }
    cout<<sum<<" "<<cnt<<endl;
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

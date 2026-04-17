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

//GCD  ---   LCM
int gcd(int a, int b){ if(b==0) return a; return gcd(b,a%b); }
int lcm(int a, int b){ return ( (a/gcd(a,b))*b ); }

/////////////////////////////Main////////////////////////////////

void solve()
{
    int n;cin>>n;
    int *v = new int[n];
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        sum += v[i];
    }
    if(sum == n) cout<<sum-4<<endl;
    else
    {
        for(int i=0; i<n-1; i++)
        {
            if(v[i] == -1 && v[i+1] == -1) {v[i]=v[i+1]=1; break;}
        }
        int ans=0;
        for(int i=0; i<n; i++) ans += v[i];
        cout<<ans<<endl;
    }
    delete[] v;
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

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
    int r = n%4;
    map<int,char> mp;
    mp[1] = 'A';
    mp[3] = 'B';
    mp[2] = 'C';
    mp[0] = 'D';

         if(r == 1) cout<<0<<" "<<mp[r];
    else if(r == 3) cout<<2<<" "<<mp[r-2];
    else if(r == 2) cout<<1<<" "<<mp[r+1];
    else if(r == 0) cout<<1<<" "<<mp[r+1];
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

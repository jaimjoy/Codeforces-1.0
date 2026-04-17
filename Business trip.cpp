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

/////////////////////////////Main////////////////////////////////

void solve()
{
    int k;cin>>k;
    int res=0;
    int cnt=0;
    priority_queue<int> pq;
    for(int i=1; i<=12; i++)
    {
        int a;cin>>a;
        pq.push(a);
    }
    if(k == 0){cout<<"0"; return;}
    while(!pq.empty())
    {
        res += pq.top();
        cnt++;
        pq.pop();
        if(res >= k) break;
    }
    if(res >= k) cout<<cnt;
    else cout<<-1;
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

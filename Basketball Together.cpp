//                                In the name of Allah                           //
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define endl '\n'
#define ff first
#define ss second
#define pb push_back
#define all(a) (a).begin(),(a).end()
#define allr(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
#define YES {cout<<"YES"<<endl;}
#define NO  {cout<<"NO"<<endl;}
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
/*_________________________________________________________________________________________________________*/

void solve()
{
    int n,d;cin>>n>>d;
    priority_queue<int> p;
    for(int i=0,a; i<n; i++) cin>>a, p.push(a);
    int team=0;
    while(n > 0 && !p.empty())
    {
        if(p.top() > d) {team++; p.pop(); n--; continue;}

        int comp = d/p.top() + 1;
        if(comp <= n) team++, n -= comp;
        else break;

        p.pop();
    }
    cout<<team<<endl;
}

int main()
{
    optimize();
    solve();
    //ll tc;cin>>tc;
    //for(ll i=1; i<=tc; i++) solve();
    return 0;
}
//            Alhamdulillah                //

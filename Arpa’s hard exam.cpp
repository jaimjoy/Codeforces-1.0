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
#define allr(a) (a).rbegin(),(b).rend()
#define sz(x) (int)x.size()
#define YES {cout<<"YES"<<endl;}
#define NO  {cout<<"NO"<<endl;}
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define gcd(a,b) __gcd(a,b)
#define fri(a,b) for(int i=a; i<b; i++)
#define frj(a,b) for(int j=a; j<b; j++)
/*_________________________________________________________________________________________________________*/

void solve()
{
    int n;cin>>n;
    if(n==0) cout<<1;
    else if(n%4 == 1) cout<<8;
    else if(n%4 == 2) cout<<4;
    else if(n%4 == 3) cout<<2;
    else cout<<6;
}

int main()
{
    optimize();
    solve();
    /*int tc;cin>>tc;
    for(ll d=1; d<=tc; d++) solve();*/

    return 0;
}
//            Alhamdulillah                //

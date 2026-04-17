//  In the name of Almighty Allah

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define nl '\n'
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


void solve()
{
    int n;cin>>n;

    //1001010 here msb is 2^6th bit that is = 1
    //maximum lowest cost would be 2^msb
    int msb = log2(n-1);

    int num = pow(2, msb)-1;//2^msb-1 to 0
    while(num > -1)
    {
        cout<<num<<' ';
        num--;
    }

    num = pow(2, msb);//2^msb to n-1
    while(num <= n-1)
    {
        cout<<num<<' ';
        num++;
    }
    cout<<nl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //

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
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define minus cout<<"-1\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define cin(a) for(auto &x:a) cin>>x;
string decToBin(ll n){string s="";while(n>0){s=to_string(n%2)+s;n/=2;}return s;}

void solve()
{
    int n;
    string s;cin>>n>>s;
    string t;
    for(int i=0; i<n; i++)
    {
        if(i%2 == 0) t += 'a';
        else t += 'b';
    }

    int i=0, j=n-1, k=0;
    while(i<=j)
    {
        if(s[k] == t[i]) i++, k++;
        else if(s[k] == t[j]) j--, k++;
        else if(s[k] == '?') i++, k++;
        else if(s[k-1] == '?')
        {
            i--;
            j--;
        }
        else {NO; return;}
    }
    YES;
}

int main()
{
    optimize();
    // solve();
    ll tc;cin>>tc;for(int i=1; i<=tc; i++)solve();
    return 0;
}
//         Alhamdulillah         //
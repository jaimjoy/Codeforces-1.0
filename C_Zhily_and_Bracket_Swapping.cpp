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
#define eb emplace_back
#define all(a) (a).begin(),(a).end()
#define allr(a) (a).rbegin(),(a).rend()
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define minus cout<<"-1\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int MOD = 998244353;
ll gcd(ll a, ll b) {return b ? gcd(b, a%b):a;}
ll lcm(ll a, ll b) {return (a*b)/gcd(a,b);}
ll modPow(ll a,ll b){ll res=1;while(b){if(b&1)res=(res*a)%MOD;a=(a*a)%MOD;b/=2;}return res;}
#define cin(a) for(auto &x:a) cin>>x;
string decToBin(ll n){string s="";while(n>0){s=to_string(n%2)+s;n/=2;}return s;}

void solve()
{
    int n;cin>>n;
    string a,b;cin>>a>>b;

    int changes=0;
    for(int i=0; i<n; i++)
    {
        if(a[i] != b[i])
        {
            changes++;
            if(changes&1)
            {
                a[i] = '(';
                b[i] = ')';
            }
            else
            {
                a[i] = ')';
                b[i] = '(';
            }
        }
    }

    stack<char> st;
    for(int i=0; i<n; i++)
    {
        if(st.empty()) st.push(a[i]);
        else if(st.top() == '(' && a[i] == ')') st.pop();
        else st.push(a[i]);
    }
    if(!st.empty()) {NO; return;}

    stack<char> st2;
    for(int i=0; i<n; i++)
    {
        if(st2.empty()) st2.push(b[i]);
        else if(st2.top() == '(' && b[i] == ')') st2.pop();
        else st2.push(b[i]);
    }
    if(!st2.empty()) {NO; return;}

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
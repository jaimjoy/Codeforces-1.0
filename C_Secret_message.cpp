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
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define cin(a) for(auto &x:a) cin>>x;
string decToBin(ll n){string s="";while(n>0){s=to_string(n%2)+s;n/=2;}return s;}

vector<int> factors(int n)
{
    vector<int> temp;
    for(int i=1; i*i<=n; i++)
    {
        if(n%i) continue;
        temp.eb(i);
        if(n/i != i) temp.eb(n/i);
    }
    return temp;
}
void solve()
{
    int n,k;cin>>n>>k;
    vector<string> s(k);
    for(int i=0; i<k; i++) cin>>s[i];

    vector<int> fact = factors(n);
    sort(all(fact));

    vector<bitset<26>> common(n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<k; j++)
        {
            common[i].set(s[j][i] - 'a');
        }
    }

    for(auto x:fact)
    {
        string p;
        bool f=1;

        for(int r=0; r<x; r++)//pattern length
        {
            bitset<26>m;
            m.set();

            for(int i=r; i<n; i+=x)
            {
                m &= common[i];
            }
            if(m.none()) 
            {
                f=0; 
                break;
            }

            int id = -1;
            for(int i=0; i<26; i++)
            {
                if(m[i])
                {
                    id = i;
                    break;
                }
            }
            p += char('a' + id);//converting common bit position into character
        }
        if(f)
        {
            //ans is always the valid lowest factor of n
            for(int i=0; i<n/x; i++) cout<<p; 
            cout<<nl;
            return;
        }
    }
}

int main()
{
    optimize();
    // solve();
    ll tc;cin>>tc;for(int i=1; i<=tc; i++)solve();
    return 0;
}
//         Alhamdulillah         //
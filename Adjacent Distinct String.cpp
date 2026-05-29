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
ll gcd(ll a, ll b) {return b ? gcd(b, a%b):a;}
ll lcm(ll a, ll b) {return (a*b)/gcd(a,b);}
#define cin(a) for(auto &x:a) cin>>x;
string decToBin(ll n){string s="";while(n>0){s=to_string(n%2)+s;n/=2;}return s;}

void solve()
{
    string s;cin>>s;
    if(s.size() == 1) 
    {
        cout<<"Yes"<<nl;
        cout<<s<<nl; 
        return;
    }
    
    map<char,int> mp;
    for(int i=0; i<s.size(); i++)
    {
        mp[s[i]]++;
    }
    if(mp.size() == 1) {cout<<"No"<<nl; return;}

    string ans="";
    int k=mp.size();
    while(k > 0)
    {
        for(auto &u:mp)
        {
            if(u.ss > 0)
            {
                ans += u.ff;
                u.ss--;
                if(u.ss == 0) k--;
            }
        }
    }

    int ind=-1;
    string t="";
    for(int i=1; i<ans.size(); i++)
    {
        if(ans[i] == ans[i-1])
        {
            ind = i;
            while(i < ans.size())
            {
                t += ans[i];
                i++;
            }
        }
    }
    while(ans.size()-1 >= ind && ind != -1) ans.pop_back();
    
    int in=0;
    string res="";
    if(ans[0] != t[0] && !t.empty()) res += t[0], res += ans[0], in++;
    else res += ans[0];
    
    for(int i=1; i<ans.size(); i++)
    {
        if(t.empty()) break;

        if(ans[i] != t[in] && ans[i-1] != t[in] && in < t.size())
        {
            res += t[in];
            res += ans[i];
            in++;
        }
        else 
        {
            res += ans[i];
        }
    }

    while(in < t.size()) res += t[in], in++;

    for(int i=1; i<res.size(); i++)
    {
        if(res[i] == res[i-1])
        {
            cout<<"No"<<nl;
            return;
        }
    }

    cout<<"Yes"<<nl;
    if(t.empty()) cout<<ans<<nl;
    else cout<<res<<nl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;for(int i=1; i<=tc; i++)solve();
    return 0;
}
//         Alhamdulillah         //

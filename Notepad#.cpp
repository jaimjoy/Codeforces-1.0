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
/*_________________________________________________________________________________________________________*/
// Code Here // // Code Here // // Code Here // // Code Here // // Code Here // // Code Here // // Code Here

void solve()
{
    int n;
    string s;cin>>n>>s;
    map<string, int> mp;
    int dist=0;
    for(int i=0; i<n-1; i++)
    {
        string a;
        a += s[i];
        a += s[i+1];
        if(s[i] == s[i+1] && dist == 0) mp[a]++, dist=1;
        else if(s[i] != s[i+1]) mp[a]++, dist=0;
        else dist=0;
    }
    for(auto u:mp) if(u.ss >=2) {YES; return;}
    NO;
}

int main()
{
    optimize();
    ll t;cin>>t;
    for(ll d=1; d<=t; d++) solve();

    return 0;
}
//            Alhamdulillah                //

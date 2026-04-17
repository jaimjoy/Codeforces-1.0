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
    int n,k;
    string s,t;cin>>n>>k>>s;
    map<char,int> mpp,m;
    for(int i=0; i<n; i++)
    {
        if(isupper(s[i])) mpp[s[i]]++;
        else m[s[i]]++;
    }
    ll ans=0;
    for(int i=0; i<n; i++)
    {
        if(islower(s[i]))
        {
            if(mpp[toupper(s[i])] > 0)
            {
                ans++;
                mpp[toupper(s[i])]--;
            }
            else t += s[i];
        }
        else
        {
            if(m[tolower(s[i])] > 0)
            {
                m[tolower(s[i])]--;
            }
            else t += s[i];
        }
    }
    map<char,int> mp;
    for(int i=0; i<sz(t); i++) mp[t[i]]++;
    for(auto u:mp)
    {
        int r = u.ss/2;
        if(k == 0) {break;}
        else
        {
            if(r <= k)
            {
                ans += r;
                k -= r;
            }
            else {ans += k; break;}
        }
    }
    cout<<ans<<endl;
}

int main()
{
    optimize();
    ll t;cin>>t;
    for(ll d=1; d<=t; d++) solve();

    return 0;
}
//            Alhamdulillah                //

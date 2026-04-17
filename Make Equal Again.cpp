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

void solve(int c)
{
    int n;cin>>n;
    vi v(n);
    map<int,int> mp;
    for(int i=0; i<n; i++) cin>>v[i], mp[v[i]]++;
    if(sz(mp) == 1) {cout<<0<<endl; return;}

    if(v[0] == v[n-1])
    {
        int ans=2;
        int i=1, j=n-2;
        while(i<j)
        {
            if(v[0] == v[i]) ans++;
            else break;
            i++;
        }
        while(j>1)
        {
            if(v[n-1] == v[j]) ans++;
            else break;
            j--;
        }
        cout<<n-ans<<endl;
    }
    else
    {
        int i=1, ii=1, j=n-1;
        while(i<j)
        {
            if(v[i] == v[i-1]) i++;
            else break;
        }
        while(j>i)
        {
            if(v[j] == v[j-1]) j--, ii++;
            else break;
        }
        cout<<min(n-ii, n-i)<<endl;
    }
}

int main()
{
    optimize();
    ll t;cin>>t;
    for(ll d=1; d<=t; d++) solve(d);

    return 0;
}
//            Alhamdulillah                //

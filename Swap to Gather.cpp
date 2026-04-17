#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define pb push_back
#define sz(x) (int)x.size()
#define all(a) (a).begin(),(a).end()
typedef vector<int> vi;
typedef vector<ll> vl;

int main()
{
    optimize();
    int n;cin>>n;
    string s;cin>>s;
    ll one = count(s.begin(),s.end(),'1');
    ll x=0, ans=0;
    for(int i=0; i<n; i++)
    {
        if(s[i] == '1') x++;
        else ans += min(x,one-x);
    }
    cout<<ans<<endl;

    return 0;
}

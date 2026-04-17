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
    string s;cin>>s;
    int i=0,j=sz(s)-1;
    map<char,int> mp;
    for(int i=0; i<sz(s); i++) mp[s[i]]++;
    if(sz(mp) == 1) {cout<<0; return;}

    bool f=0;
    while(i<j)
    {
        if(s[i] != s[j]) {f=1; break;}
        i++;
        j--;
    }
    if(f) cout<<sz(s);
    else cout<<sz(s)-1;
}

int main()
{
    optimize();
    solve();

    return 0;
}
//            Alhamdulillah                //

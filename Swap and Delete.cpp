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
    ll z=0, o=0;
    for(int i=0; i<sz(s); i++)
    {
        if(s[i] == '0') z++;
        else o++;
    }
    if(z==0 || o==0) cout<<sz(s)<<endl;
    else if(z == o) cout<<0<<endl;
    else
    {
        string n;
        int cnt=z, cnt1=o;
        for(int i=0; i<sz(s); i++)
        {
            if(s[i] == '1' && cnt>0) n+='0', cnt--;
            else if(cnt1>0) n+='1', cnt1--;
            else n+=s[i];
        }
        char c;
        int ind=-1;
        for(int i=0; i<sz(s); i++)
        {
            if(s[i] == n[i]) {c = s[i]; ind = i; break;}
        }
        int ansss=0;
        for(int i=ind; i<sz(s); i++)
        {
            if(n[i] == c) {ansss++;}
        }
        cout<<ansss<<endl;
    }
}

int main()
{
    optimize();
    ll t;cin>>t;
    for(ll d=1; d<=t; d++) solve();

    return 0;
}
//            Alhamdulillah                //

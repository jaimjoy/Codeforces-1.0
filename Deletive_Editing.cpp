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
#define sz(x) (int)x.size()
#define YES {cout<<"YES"<<endl;}
#define NO  {cout<<"NO"<<endl;}
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd(a,b)

void solve()
{
    string s,t;cin>>s>>t;
    map<int,int> smp, tmp;
    for(int i=0; i<s.size(); i++) smp[s[i]]++;
    for(int i=0; i<t.size(); i++) tmp[t[i]]++;

    int i=0, j=0;
    while(i<s.size() && j<t.size())
    {
        char c = s[i];
        char v = t[j];
        if(c == v)
        {
            if(smp[c] < tmp[v]) {break;}
            if(smp[c] == tmp[v])
            {
                tmp[v]--;//runtime map update
                j++;
            }
        }

        i++;
        smp[c]--;//runtime map update
    }

    if(j == t.size()) {YES;}
    else NO;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //

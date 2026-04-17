//            In the name of Allah        //
/*
    One day I'll be no more,
    but my code will !
*/
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
        string s,p;cin>>s>>p;
        int n = s.size();
        int k = p.size();
        map<char,int> mp, window;
        for(int i=0; i<k; i++) window[s[i]]++, mp[p[i]]++;

        vector<int> ans;
        for(int i=0; i<=n-k; i++)
        {
            bool f=0;
            for(char i='a'; i<='z'; i++)
            {
                if(mp[i] != window[i]) {f = 1; break;}
            }
            if(!f) ans.push_back(i);

            window[s[i]]--;
            window[s[i+k]]++;
        }
        for(auto u:ans) cout<<u<<' ';
        cout<<nl;
}

int main()
{
    optimize();
    solve();
    return 0;
}
//         Alhamdulillah         //

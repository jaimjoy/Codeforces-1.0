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
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define minus cout<<"-1\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd(a,b)
string decToBin(ll n){string s="";ll i=0;while(n>0){s=to_string(n%2)+s;n/=2;i++;}return s;}

void solve()
{
    string s;cin>>s;
    int ind=-1;
    int one = count(all(s), '1');

    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == '0') {ind = i; break;}
    }
    if(ind == -1) cout<<1<<' '<<s.size()<<" 1 1"<<nl;
    else
    {
        int len = s.size()-ind, left=-1;
        string cmp = "0";
        for(int i=0; i<ind; i++)
        {
            int cnt = len, j=i, ii=ind;
            string temp;
            while(cnt--)
            {
                if(s[j] != s[ii]) temp+='1';
                else temp+='0';
                j++;
                ii++;
            }
            if(cmp < temp)
            {
                cmp = temp;
                left = i;
            }
        }
        cout<<1<<' '<<s.size()<<' '<<left+1<<' '<<left+len<<nl;
    }
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //

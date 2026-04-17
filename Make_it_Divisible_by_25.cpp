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
    string s;cin>>s;
    int cnt1=0, cnt2=0;
    int a=0, b=0;
    bool f=0, ff=0;
    for(int i=s.size()-1; i>=0; i--)
    {
        if(s[i] == '0')
        {
            for(int j=i-1; j>=0; j--)
            {
                if(s[j] == '0' || s[j] == '5')
                {
                    f=1;
                    break;
                }
                else a++;
            }
            break;
        }
        else cnt1++;
    }
    for(int i=s.size()-1; i>=0; i--)
    {
        if(s[i] == '5')
        {
            for(int j=i-1; j>=0; j--)
            {
                if(s[j] == '2' || s[j] == '7')
                {
                    ff=1;
                    break;
                }
                else b++;
            }
            break;
        }
        else cnt2++;
    }

    if(f && ff) cout<<min(cnt1+a, cnt2+b)<<nl;
    else if(f) cout<<cnt1+a<<nl;
    else cout<<cnt2+b<<nl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //

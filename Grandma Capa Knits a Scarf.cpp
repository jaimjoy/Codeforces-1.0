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
#define lcm(a,b) (a*b)/gcd(a,b)
#define cin(a) for(auto &x:a) cin>>x;
string decToBin(ll n){string s="";ll i=0;while(n>0){s=to_string(n%2)+s;n/=2;i++;}return s;}

int check(string s, char selected, int left, int right)
{
    int l=left, r=right, cnt=0;
    while(l<r)
    {
        if(s[l] == s[r]) l++, r--;
        else if(s[l] != s[r])
        {
            if(s[l] == selected) l++, cnt++;
            else if(s[r] == selected) r--, cnt++;
            else return -1;
        }
        else return -1;
    }
    return cnt;
}
void solve()
{
    int n;cin>>n;
    string s;cin>>s;

    int l=0, r=n-1;
    int ans=0;
    while(l<r)
    {
        if(s[l] != s[r])
        {
            int ans1 = check(s,s[l],l,r);
            int ans2 = check(s,s[r],l,r);
            
            if(ans1 == -1 && ans2 == -1) minus;
            else
            {
                if(ans1 != -1 && ans2 != -1) 
                {
                    cout<<min(ans1, ans2)<<nl;
                }
                else 
                {
                    cout<<max(ans1, ans2)<<nl;
                }
            }
            return;
        }
        else l++,r--;
    }
    cout<<0<<nl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    //solve();
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //
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
#define allr(a) (a).rbegin(),(b).rend()
#define sz(x) (int)x.size()
#define YES {cout<<"YES"<<endl;}
#define NO  {cout<<"NO"<<endl;}
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define gcd(a,b) __gcd(a,b)
#define fri(a,b) for(int i=a; i<b; i++)
#define frj(a,b) for(int j=a; j<b; j++)
/*_________________________________________________________________________________________________________*/

void solve()
{
    int n;
    string s,ans;
    cin>>n>>s;
    ans = s;
    for(int i=0; i<n; i++)
    {
        if(s[i] != '?')
        {
            int f = i,b = i;
            while(b-1 >=0 && ans[b-1] == '?')
            {
                if(ans[b] == 'B') ans[b-1] = 'R';
                else ans[b-1] = 'B';
                b--;
            }
            while(f+1 < n && ans[f+1] == '?')
            {
                if(ans[f] == 'B') ans[f+1] = 'R';
                else ans[f+1] = 'B';
                f--;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        if(ans[i] == '?')
        {
            if(ans[i+1] == 'B' || ans[i-1] == 'B') ans[i] = 'R';
            else if(ans[i+1] == 'R' || ans[i-1] == 'R') ans[i] = 'B';
            else ans[i] = 'B';
        }
    }
    cout<<ans<<endl;
}
int main()
{
    optimize();
    int tc;cin>>tc;
    for(ll d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //

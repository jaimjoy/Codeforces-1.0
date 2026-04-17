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
/*_________________________________________________________________________________________________________*/
// Main Code // Main Code // Main Code // Main Code // Main Code // Main Code // Main Code // Main Code //

void solve()
{
    int n,a,b,c;cin>>n>>a>>b>>c;
    if(a>=n){cout<<1<<endl;return;}
    if(b>=n || a+b >= n){cout<<2<<endl;return;}
    if(c>=n || a+b+c >= n){cout<<3<<endl;return;}

    int tot = (n/(a+b+c));
    int hold = (a+b+c)*tot;
    if(n%hold != 0)
    {
        int cnt=0;
        while(hold<n)
        {
            if(hold<n) hold+=a, cnt++;
            if(hold<n) hold+=b, cnt++;
            if(hold<n) hold+=c, cnt++;
        }
        cout<<(tot*3)+cnt<<endl;
    }
    else cout<<tot*3<<endl;
}

int main()
{
    optimize();
    int tc;cin>>tc;
    for(ll d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //

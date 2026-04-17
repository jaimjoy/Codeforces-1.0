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
    string s;cin>>s;
    int sum=0, t=0,th=0;
    for(int i=0; i<sz(s); i++)
    {
        if(s[i] == '2') t++;
        else if(s[i] == '3') th++;
        sum += s[i]-'0';
    }
    if(sum%9 == 0) {YES; return;}

    int lagtese = ((sum+9-1)/9)*9-sum;//ceiling + joto lagtese
    bool f=0;
    for(int i=0; i<=min(t,100); i++)
    {
        for(int j=0; j<=min(100,th); j++)
        {
            ll multiple = i*2 + j*6;
            if(multiple%9 == lagtese)
            {
                YES;
                return;
            }
        }
    }
    NO;
}

int main()
{
    optimize();
    int tc;cin>>tc;
    for(ll d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //

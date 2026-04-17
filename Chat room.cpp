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
// Main Code // Main Code // Main Code // Main Code // Main Code // Main Code // Main Code // Main Code //

void solve()
{
    string s,ans;cin>>s;
    for(int i=0; i<sz(s); i++)
    {
        int cnt2 = count(ans.begin(),ans.end(),'h');
        if(s[i] == 'h' && ans.empty()) ans += s[i];
        else if(s[i] == 'e' && ans.back() == 'h' && cnt2 == 1) ans += s[i];
        else if(s[i] == 'l')
        {
            if(ans.back() == 'e') ans += s[i];
            else if(sz(ans) > 2 && ans[sz(ans)- 2] == 'e' && ans[sz(ans)-1] == 'l') ans += s[i];
        }
        else if(s[i] == 'o' && sz(ans)>3 && ans.back() == 'l') ans += s[i];
        if(ans == "hello") {YES; return;}
    }
    NO;
}

int main()
{
    optimize();
    solve();
    //int tc;cin>>tc;
    //for(ll d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //

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
#define gcd(a,b) __gcd(a,b)
/*_________________________________________________________________________________________________________*/
// Main Code // Main Code // Main Code // Main Code // Main Code // Main Code // Main Code // Main Code //

void solve(int t)
{
    char ch[8][8];
    int r=0, b=0;
    for(int i=0; i<8; i++) for(int j=0; j<8; j++) cin>>ch[i][j];
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            if(ch[i][j] == 'R') r++;
        }
        if(r == 8) {cout<<"R"<<endl; return;}
        r=0;
        b=0;
    }
    cout<<"B"<<endl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(ll d=1; d<=tc; d++) solve(d);

    return 0;
}
//            Alhamdulillah                //

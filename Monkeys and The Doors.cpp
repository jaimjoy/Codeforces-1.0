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

void solve()
{
    int n;cin>>n;
    vi v(n+1,1);
    int cnt = 0;
    for(int i=2; i<=n; i++)
    {
        int k = i;
        while(k<=n)
        {
            if(v[k] == 1) v[k] = 0;
            else v[k] = 1;
            k+=i;
        }
    }
    for(int i=1; i<=n; i++) if(v[i] == 1) cnt++;
    cout<<cnt<<endl;
    for(int i=1; i<=n; i++) if(v[i] == 1) cout<<i<<" ";
}

int main()
{
    optimize();
    solve();
    return 0;
}
//            Alhamdulillah                //

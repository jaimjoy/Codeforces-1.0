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
    int n;cin>>n;
    vl v(n+1);//1 based indexing
    map<ll,ll> m;
    for(int i=1; i<=n; i++) cin>>v[i],m[v[i]]++;

    ll get=0, mx=0, first=0, second=0, a=0, b=0;
    for(int i=1; i<=n; i++)
    {
        bool f=0;
        while(i<=n && m[v[i]] == 1)
        {
            get=1;
            if(!f)
            {
                first=i;
                f=1;
            }
            if(f)
            {
                second=i;
                if((second-first+1) >= mx)
                {
                    mx = second-first+1;
                    a = first;
                    b = second;
                }
            }
            i++;
        }
        if(f) i--;//f=1 mane, 'i' 1 ghor shamne chole gese, tai 1 ghor piche anbo
    }
    if(get == 0) cout<<0<<endl;//as mentioned that I can print '0' also.
    else cout<<a<<" "<<b<<endl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(ll d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //

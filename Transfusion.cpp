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
    vl v(n);
    ll sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    if(sum%n != 0) {NO; return;}
    sum /= n;
    for(int i=1; i<n-1; i++)
    {
        if(v[i-1] != sum)
        {
            if(v[i-1] < sum)
            {
                v[i+1] -= sum-v[i-1];
                v[i-1] = sum;
            }
            else
            {
                v[i+1] += v[i-1]-sum;
                v[i-1] = sum;
            }
        }
    }
    for(int i=0; i<n-1; i++)
    {
        if(v[i] != v[i+1]) {NO; return;}
    }
    YES;
}

int main()
{
    optimize();
    int tc;cin>>tc;
    for(ll d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //

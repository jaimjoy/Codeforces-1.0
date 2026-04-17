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
    vi v(n+1, 0);
    for(int i=1; i<=n; i++) cin>>v[i];

    vl presum(n+5, 0), sufsum(n+5, 0);
    //If traversing starts from 1->n then suffix needed;
    //If traversing starts from n->1 then prefix needed;
    //I'm traversing here from 1 to n so suffix needed;

    /*for(int i=1; i<=n; i++)//Prefix calculating
    {
        if(v[i] > 0) presum[i] = presum[i-1]+v[i];
        else presum[i] = presum[i-1];
    }*/
    for(int i=n; i>=0; i--)//Suffix calculating
    {
        if(v[i] < 0) sufsum[i] = sufsum[i+1]+abs(v[i]);//or sufsum[i+1] - v[i]
        else sufsum[i] = sufsum[i+1];
    }

    ll pos=0, neg=0, posmx=0, negmx=0;
    for(int i=1; i<=n; i++)
    {
        ll sum=0;
        if(v[i] > 0) pos += v[i];
        else sum = sufsum[i];//negative paisi
        posmx = max(posmx, pos+sum);
    }
    /*for(int i=n; i>0; i--)
    {
        ll sum=0;
        if(v[i] < 0) neg -= v[i];
        else sum = presum[i];//positive paisi
        negmx = max(negmx, neg+sum);
        //cout<<sum<<" "<<neg<<" "<<negmx<<endl;
    }*/
    cout<<posmx<<endl;
}

int main()
{
    optimize();
    int tc;cin>>tc;
    for(ll d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //

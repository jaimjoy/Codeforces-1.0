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
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int query(int i, int j)
{
    cout<<"? "<<i<<' '<<j<<endl;
    int q;cin>>q;
    return q;
}
void print(int ans)
{
    cout<<"! "<<ans<<endl;
}
void solve()
{
    int n;cin>>n;
    if(query(1, 2) || query(1, 3)) {print(1); return;}
    if(query(2, 3)) {print(2); return;}

    int i=4;
    while(i < 2*n)
    {
        if(query(i, i+1)) {print(i); return;}
        i += 2;
    }
    print(2*n);
}

int main()
{
    optimize();
    //solve();
    ll tc;cin>>tc;for(int i=1; i<=tc; i++)solve();
    return 0;
}
//         Alhamdulillah         //

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

vector<vector<int>> v;//Global is accessible

int getsum(int val, int i, int j, int n, int m)
{
    int sum = val, ic = i, jc = j;

    //Niche Right Diagonal
    while(ic+1<n && jc+1<m) sum += v[ic+1][jc+1], ic++, jc++;
    ic=i;jc=j;

    //Upore Left Diagonal
    while(ic-1>-1 && jc-1>-1) sum += v[ic-1][jc-1], ic--, jc--;
    ic=i;jc=j;

    //Upore Right Diagonal
    while(ic-1>-1 && jc+1<m) sum += v[ic-1][jc+1], ic--, jc++;
    ic=i;jc=j;

    //Niche Left Diagonal
    while(ic+1<n && jc-1>-1) sum += v[ic+1][jc-1], ic++, jc--;

    return sum;
}
void solve()
{
    int n,m;cin>>n>>m;
    //assigning size instead of clear()
    //Because clear won't work
    v.assign(n, vector<int>(m,0));

    for(int i=0; i<n; i++) for(int j=0; j<m; j++) cin>>v[i][j];
    int bishop=-1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            bishop = max(bishop, getsum(v[i][j], i, j, n, m));
        }
    }
    cout<<bishop<<endl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(ll d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //

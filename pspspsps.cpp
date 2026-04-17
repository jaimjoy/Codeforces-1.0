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

void solve()
{
    int n;string s;cin>>n>>s;
    //pi = p index
    //si = s index
    int sc=0, pc=0, indx=0, si=0, pi=-1;
    fri(0,n)
    {
        if(s[i] == 's')
        {
            sc++;
            si = indx;
        }
        else if(s[i] == 'p')
        {
            pc++;
            if(pi == -1) pi = indx;
        }
        indx++;
    }
    if(sc == 0 || pc == 0) {YES;}
    else if(pi == n-1 || si == 0) {YES;}//pi shobar last e OR si shobar first e
    else {NO;}
}

int main()
{
    optimize();
    int tc;cin>>tc;
    for(ll d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //

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
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define minus cout<<"-1\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd(a,b)
string decToBin(ll n){string s="";ll i=0;while(n>0){s=to_string(n%2)+s;n/=2;i++;}return s;}

int main()
{
    optimize();
    ll tc;cin>>tc;
    tc--;
    do
    {
        ll a,b;cin>>a>>b;
        if(a > b) swap(a,b);

        ll ta = a, tb = b, b1=1, b2=2, ans1=0, temp1=0, temp2=0;
        while(ta-b1 >= 0)
        {
            ta -= b1;
            b1 *= 4;
            temp1++;
            ans1++;
        }
        while(ans1 > 0 && tb-b2 >= 0)
        {
            tb -= b2;
            b2 *= 4;
            temp1++;
            ans1--;
        }

        ta = a, tb = b, b1=1, b2=2, ans1=0;
        while(ta-b2 >= 0)
        {
            ta -= b2;
            b2 *= 4;
            temp2++;
            ans1++;
        }
        ans1++;
        while(ans1 > 0 && tb-b1 >= 0)
        {
            tb -= b1;
            b1 *= 4;
            temp2++;
            ans1--;
        }
        cout<<max(temp1, temp2)<<nl;
    }
    while(tc--);
    return 0;
}
//         Alhamdulillah         //
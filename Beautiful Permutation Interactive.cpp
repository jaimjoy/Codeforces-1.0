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

int q1(int l, int r)
{
    cout<<'1'<<' '<<l<<' '<<r<<endl;
    int sum;cin>>sum;
    return sum;
}
int q2(int l, int r)
{
    cout<<'2'<<' '<<l<<' '<<r<<endl;
    int sum;cin>>sum;
    return sum;
}
void solve()
{
    int n;cin>>n;
    int sum1 = q1(1,n);
    int sum2 = q2(1,n);
    int len = sum2-sum1;
    int l=1, r=n;
    while(l<r)
    {
        int mid = (l+r)/2;
        int s1 = q1(1,mid);
        int s2 = q2(1,mid);
        int diff = s2-s1;
        if(diff == 0) l = mid+1;
        else r = mid;
    }
    cout<<"! "<<l<<' '<<l+len-1<<endl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //

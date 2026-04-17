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
#define sz(x) (int)x.size()
#define YES {cout<<"YES"<<endl;}
#define NO  {cout<<"NO"<<endl;}
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd(a,b)

ll next_prime(ll n)
{
    for(ll i=n; i<=n+10; i++)
    {
        bool prime=1;
        for(ll j=2; j*j<=i; j++)
        {
            if(i%j == 0) {prime=0; break;}
        }
        if(prime) return i;
    }
}
void solve()
{
    int d;cin>>d;
    // p & q are prime numbers
    // p^3 & pq will always give exactly 4 divisors
    // Now try to figure the smallest one

    //    1 p p^2 p^3
    //-> (p-1) (p^2-p) (p^3-p^2)
    //-> (p-1) p(p-2) p^2(p-1)
    //Condition-1: p >= d+1

    // q is also a prime where q > p
    //    1 p q pq
    //-> (p-1) (q-p) (pq-q)
    //-> (p-1) (q-p) q(p-1)
    //Condition-2: q >= d+p

    ll p = next_prime(d+1);
    ll q = next_prime(d+p);
    cout<<(p*q)<<nl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //

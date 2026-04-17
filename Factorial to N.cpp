#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define pb push_back
#define sz(x) (int)x.size()
#define all(a) (a).begin(),(a).end()
typedef vector<int> vi;
typedef vector<ll> vl;

ll fact(ll i)
{
    if(i == 0 || i == 1) return 1;
    return i*fact(i-1);
}
int main()
{
    optimize();
    ll m,n=2;cin>>m;
    for(int i=2; i<=21; i++)
    {
        if(fact(i) == m) {cout<<i<<endl; return 0;}
    }

    return 0;
}

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

int main()
{
    optimize();
    int n;cin>>n;
    vi v(n);
    ll cnt=0;
    for(int i=0; i<n; i++) cin>>v[i];

    int j=0;
    for(int i=0; i<n; i++)
    {
        while(j<n && v[j] < v[i]*2) j++;
        cnt += n-j;
    }
    cout<<cnt;

    return 0;
}

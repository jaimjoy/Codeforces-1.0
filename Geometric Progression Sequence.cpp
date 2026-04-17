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
    vl v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    if(n==2) {cout<<"Yes"<<endl; return 0;}

    for(int i=2; i<n; i++)
    {
        if(v[i]*v[0] != v[i-1]*v[1]) {cout<<"No"<<endl; return 0;}
    }
    cout<<"Yes"<<endl;

    return 0;
}

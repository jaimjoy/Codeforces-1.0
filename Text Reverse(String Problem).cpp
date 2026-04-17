#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define sz(x) (int)x.size()
#define all(a) (a).begin(),(a).end()
typedef vector<int> vi;
typedef vector<ll> vl;

int main()
{
    optimize();
    int q;cin>>q;
    cin.ignore();
    for(int i=1; i<=q; i++)
    {
        char t[1000];
        cin.get(t,1000);
        cin.get();
        stringstream ss(t);
        vector<string> vs;
        string s;
        while(ss>>s)
        {
            reverse(all(s));
            vs.pb(s);
        }
        for(int i=0; i<sz(vs); i++)
        {
            cout<<vs[i];
            if(i < sz(vs)-1) cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}

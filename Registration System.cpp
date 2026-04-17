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
#define rall(a) (a).rbegin(),(a).rend()
typedef vector<int> vi;
typedef vector<ll> vl;

int main()
{
    optimize();
    int q;cin>>q;
    map<string,int> ms;
    int j = 1;
    for(int i=1; i<=q; i++)
    {
        string s;cin>>s;
        if(ms[s] == 0)
        {
            ms[s] = 1;
            cout<<"OK"<<endl;
        }
        else
        {
            string ns = s + to_string(ms[s]);
            ms[s]++;
            ms[ns] = 1;
            cout<<ns<<endl;
        }
    }

    return 0;
}

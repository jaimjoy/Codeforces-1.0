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
    int n;cin>>n;
    multiset<int> s;
    while(n--)
    {
        int a,x;cin>>a;
        if(a==0)
        {
            cin>>x;
            s.insert(x);
            cout<<sz(s)<<endl;
        }
        else if(a==1)
        {
            cin>>x;
            if(s.find(x) != s.end()) cout<<s.count(x)<<endl;
            else cout<<0<<endl;
        }
        else if(a==2)
        {
            cin>>x;
            if(!s.empty()) s.erase(x);
        }
        else if(a==3)
        {
            int l,r;cin>>l>>r;
            auto it = s.lower_bound(l);//to avoid TLE
            auto endd = s.upper_bound(r);//to avoid TLE
            while(it != endd)
            {
                cout<<*it<<endl;
                it++;
            }
        }
    }

    return 0;
}

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
    deque<int> q;
    for(int i=1; i<=n; i++)
    {
        int a;cin>>a;
        if(a==0)
        {
            int d,x;cin>>d>>x;
            if(d==0) q.push_front(x);
            else q.push_back(x);
        }
        else if(a==1)
        {
            int x;cin>>x;
            cout<<q[x]<<endl;//Deque can be accessed by index
        }
        else
        {
            int d;cin>>d;
            if(d==0) q.pop_front();
            else q.pop_back();
        }
    }

    return 0;
}

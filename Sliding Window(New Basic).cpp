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
    int q;cin>>q;
    while(q--)
    {
        int n,k;cin>>n>>k;
        deque<int> dq;
        vi v(n);
        for(int i=0; i<n; i++) cin>>v[i];

        //Sliding Window of K
        for(int i=0; i<n; i++)
        {
            if(!dq.empty() && dq.front() == i-k) dq.pop_front();

            while(!dq.empty() && v[dq.back()] <= v[i]) dq.pop_back();

            dq.push_back(i);

            if(i >= k-1)
            {
                cout<<v[dq.front()];
                if(i < n-1) cout<<" ";
            }

        }
        cout<<endl;
    }

    return 0;
}

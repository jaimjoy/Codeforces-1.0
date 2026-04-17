#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

int main()
{
    optimize();
    int n,k;cin>>n>>k;
    vector<pair<ll, ll>> v(n);
    map<ll,ll> m;
    for(int i=0; i<n; i++)
    {
        cin>>v[i].first;
        v[i].second = i+1;
    }
    int i=0, j=n-1;
    sort(v.begin(),v.end());
    while(i<j) //two pointer
    {
        int sum = v[i].first + v[j].first;
        if(sum == k) {cout<<v[i].second<<" "<<v[j].second<<endl; return 0;}
        if(sum > k) j--;
        else i++;
    }
    cout<<"IMPOSSIBLE";

    return 0;
}

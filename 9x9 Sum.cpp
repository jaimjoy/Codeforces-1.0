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
    int x;cin>>x;
    int ar[10][10];
    ll sum=0;
    for(int i=1; i<10; i++)
    {
        for(int j=1; j<10; j++) ar[i][j] = i*j, sum += ar[i][j];
    }
    for(int i=1; i<10; i++)
    {
        for(int j=1; j<10; j++)
        {
            if(ar[i][j] == x) sum -= ar[i][j];
        }
    }
    cout<<sum<<endl;

    return 0;
}

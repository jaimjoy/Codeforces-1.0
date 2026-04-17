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
    string s;cin>>s;
    ll cnt=0;
    for(int i=0; i<sz(s)-2; i++)
    {
        for(int j=i+1; j<sz(s)-1; j++)
        {
            for(int k=j+1; k<sz(s); k++)
            {
                if(s[i] == 'A' && s[j] == 'B' && s[k] == 'C' && (j-i == k-j)) cnt++;
            }
        }
    }
    cout<<cnt<<endl;

    return 0;
}

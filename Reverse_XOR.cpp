//  In the name of Almighty Allah

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define nl '\n'
#define ff first
#define ss second
#define pb push_back
#define all(a) (a).begin(),(a).end()
#define allr(a) (a).rbegin(),(a).rend()
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define minus cout<<"-1\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd(a,b)

bool palindrome(string s, int i, int j)
{
    while(i<j)
    {
        if(s[i] == s[j]) i++, j--;
        else return false;
    }
    return true;
}
void solve()
{
    ll n;cin>>n;

    string s = bitset<32>(n).to_string();
    while(s.front() == '0') s.erase(s.begin());//first zeros
    while(s.back() == '0') s.pop_back();//last zeros

    int i=0, j=s.size()-1;
    if(palindrome(s,i,j) && __builtin_popcountll(n)%2 == 0) YES;
    else NO;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //

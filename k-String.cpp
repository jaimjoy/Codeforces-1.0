//                                By the name of Allah                           //
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define endl    '\n'
#define YES     {cout<<"YES"<<endl;}
#define NO      {cout<<"NO"<<endl;}
#define pb      push_back
#define ff      first
#define ss      second
#define bb      .begin()
#define ee      .end()
#define rb      .rbegin()
#define re      .rend()
#define ll      long long

//Yummy Function
int lcm(int a, int b){ return ( (a/__gcd(a,b))*b ); }

//////////////////////////////Main Code/////////////////////////////////

void solve()
{
    int k;cin>>k;
    string s;cin>>s;
    map<char, int> mp;
    bool f=0, ff=0;
    for(int i=0; i<s.size(); i++) mp[s[i]]++;
    for(auto &u:mp) if(u.ss%k != 0) {f=1; break;}
    if(f) {cout<<-1; return;}

    string ans;
    for(auto &u:mp)
    {
        int a = u.ss/k;
        while(a--) ans += u.ff;
    }
    for(int i=0; i<k; i++) cout<<ans;
}

int main()
{
    optimize();
    solve();
    //int tc;cin>>tc;
    //while(tc--) solve();

    return 0;
}
//            Alhamdulillah                //

//                                By the name of Allah                           //
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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

//Yummy Functions
int gcd(int a, int b){ if(b==0) return a; return gcd(b,a%b); }
int lcm(int a, int b){ return ( (a/gcd(a,b))*b ); }

//////////////////////////////Main Code/////////////////////////////////

const int mx = 1e9+123;

void solve()
{
    string a,b,c;cin>>a>>b>>c;
    int tt = a.size()+b.size();
    map<char, int> m,mp;

    for(int i=0; i<a.size(); i++) m[a[i]]++;
    for(int i=0; i<b.size(); i++) m[b[i]]++;
    for(int i=0; i<c.size(); i++) mp[c[i]]++;

    bool f=0;
    for(auto it=m.begin(), it2=mp.begin(); it2 != mp.end(); it++,it2++)
    {
        if(it->ss != it2->ss)
        {
            f=1;
            break;
        }
    }
    if(m.size() == mp.size() && !f) {YES;}
    else {NO;}
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

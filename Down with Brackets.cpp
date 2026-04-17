//                                In the name of Allah                           //
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define endl '\n'
#define ff first
#define ss second
#define pb push_back
#define all(a) (a).begin(),(a).end()
#define allr(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
#define yes {cout<<"Yes"<<endl;}
#define no  {cout<<"No"<<endl;}
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd(a,b)
/*_________________________________________________________________________________________________________*/
// Main Code // Main Code // Main Code // Main Code // Main Code // Main Code // Main Code // Main Code //

void solve()
{
    string s;cin>>s;
    if(s == "()") {no; return;}
    stack<int> st;
    for(int i=1; i<sz(s)-1; i++)
    {
        if(st.empty()) st.push(s[i]);
        else if(st.top() == '(' && s[i] == ')') st.pop();
        else st.push(s[i]);
    }
    if(st.empty()) {no;}
    else yes;
}

int main()
{
    optimize();
    int tc;cin>>tc;
    for(ll d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //

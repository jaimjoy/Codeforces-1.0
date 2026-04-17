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
#define allr(a) (a).rbegin(),(b).rend()
#define sz(x) (int)x.size()
#define YES {cout<<"YES"<<endl;}
#define NO  {cout<<"NO"<<endl;}
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define gcd(a,b) __gcd(a,b)
/*_________________________________________________________________________________________________________*/
// Main Code // Main Code // Main Code // Main Code // Main Code // Main Code // Main Code // Main Code //

void solve()
{
    string s;cin>>s;
    char c = s[0], c1 = s[sz(s)-1];
    for(int i=0; i<sz(s); i++)
    {
        if(s[i] == c) s[i] = '(';
        else if(s[i] == c1) s[i] = ')';
    }
    string test1=s, test2=s;
    for(int i=0; i<sz(test1); i++)
    {
        if(test1[i] != '(' && test1[i] != ')') test1[i] = '(';
    }
    for(int i=0; i<sz(test2); i++)
    {
        if(test2[i] != '(' && test2[i] != ')') test2[i] = ')';
    }
    stack<char> st,st1;
    for(int i=0; i<sz(test1); i++)
    {
        if(test1[i] == '(') st.push(test1[i]);
        else
        {
            if(!st.empty() && st.top() == '(') st.pop();
            else st.push(test1[i]);
        }
        if(test2[i] == '(') st1.push(test2[i]);
        else
        {
            if(!st1.empty() && st1.top() == '(') st1.pop();
            else st1.push(test2[i]);
        }
    }
    if(sz(st) == 0 || sz(st1) == 0) {YES;}
    else NO;
}
int main()
{
    optimize();
    int tc;cin>>tc;
    for(ll d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //

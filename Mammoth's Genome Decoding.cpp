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
#define YES {cout<<"YES"<<endl;}
#define NO  {cout<<"NO"<<endl;}
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd(a,b)
/*_________________________________________________________________________________________________________*/
// Main Code // Main Code // Main Code // Main Code // Main Code // Main Code // Main Code // Main Code //

void solve()
{
    int n;
    string s;cin>>n>>s;
    map<char,int> mp;
    priority_queue<int, vector<int>, greater<int>> p;
    int wh=0;
    for(int i=0; i<n; i++)
    {
        if(s[i] == '?') wh++;
        else mp[s[i]]++;
    }

    p.push(mp['A']);
    p.push(mp['C']);
    p.push(mp['G']);
    p.push(mp['T']);
    while(wh>0)
    {
        int top = p.top()+1;
        wh--;
        p.pop();
        p.push(top);
    }

    int cm = -1;
    while(!p.empty())
    {
        if(cm == -1) cm = p.top();
        else if(cm != p.top()) {cout<<"===";return;}
        p.pop();
    }

    int a = cm-mp['A'],c = cm-mp['C'],g = cm-mp['G'],t = cm-mp['T'];
    for(int i=0; i<n; i++)
    {
        if(s[i] == '?')
        {
            if(a>0) cout<<"A", a--;
            else if(c>0) cout<<"C", c--;
            else if(g>0) cout<<"G", g--;
            else if(t>0) cout<<"T", t--;
        }
        else cout<<s[i];
    }
}

int main()
{
    optimize();
    solve();

    return 0;
}
//            Alhamdulillah                //

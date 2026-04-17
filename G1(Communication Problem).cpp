//  In the name of Almighty Allah

#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve()
{
    string s;cin>>s;
    if(s == "first")
    {
        int n;cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];

        string ans;
        for(int i=0; i<n; i++)
        {
            char c = static_cast<char> ('`'+v[i]);
            ans += c;
        }
        cout<<ans<<endl;
    }
    else
    {
        string t;cin>>t;
        cout<<t.size()<<endl;
        for(int i=0; i<t.size(); i++)
        {
            cout<<t[i]-'`'<<' ';
        }
    }
}

int main()
{
    optimize();
    solve();
    return 0;
}
//         Alhamdulillah         //

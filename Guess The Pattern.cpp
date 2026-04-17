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
    int n;cin>>n;
    if(n%2 == 0) cout<<"IMPOSSIBLE"<<endl;
    else
    {
        string s,t,tt,space="";
        for(int i=1; i<=n/2; i++) space += " ";
        char c = 'A';
        for(int i=1; i<=(n*2-1); i++)
        {
            s += c;
            c++;
            if(c > 'Z') c = 'A';
        }
        int k=n/2, cnt=0, sto=-1;
        while(cnt < n/2+1)
        {
            t += s[k];
            k++;
            cnt++;
            sto = k;
        }
        reverse(all(t));

        cnt=0;
        k = (n*2-1)-1;
        while(cnt < n/2)
        {
            tt += s[k];
            k--;
            cnt++;
        }
        reverse(all(tt));
        for(int i=0; i<n/2; i++) cout<<space<<s[i]<<endl;
        cout<<t<<tt<<endl;
        cnt=0;
        while(cnt < n/2)
        {
            cout<<space<<s[sto]<<endl;
            sto++;
            cnt++;
        }
    }
}

int main()
{
    optimize();
    int tc;cin>>tc;
    for(ll d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //

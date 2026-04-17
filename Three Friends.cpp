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
    int a,b,c;cin>>a>>b>>c;
    int aa=a-1,bb=b-1,cc=c-1,aaa=a+1,bbb=b+1,ccc=c+1;
    int difab = abs(a-b),difac = abs(a-c),difbc = abs(b-c);

    if(a==b && a==c &&b==c) {cout<<0<<endl; return;}
    if(a==b || a==c || b==c)
    {
        bool f=0;
        if(a==b && c-1>b) c--,a++,b++,f=1;
        else if(a==b && c>b) a++,b++,f=1;
        else if(a==b && c+1<b) a--,b--,c++,f=1;
        else if(a==b && c<b) a--,b--,f=1;
        if(f) {cout<<abs(a-b)+abs(a-c)+abs(b-c)<<endl; return;}

        if(a==c && b-1>a) b--,a++,c++,f=1;
        else if(a==c && b>a) a++,c++,f=1;
        else if(a==c && b+1<a) a--,c--,b++,f=1;
        else if(a==c && b<a) a--,c--,f=1;
        if(f) {cout<<abs(a-b)+abs(a-c)+abs(b-c)<<endl; return;}

        if(b==c && a-1>b) a--,b++,c++,f=1;
        else if(b==c && a>b) b++,c++,f=1;
        else if(b==c && a+1<b) b--,c--,a++,f=1;
        else if(b==c && a<b) b--,c--,f=1;
        if(f) {cout<<abs(a-b)+abs(a-c)+abs(b-c)<<endl; return;}
    }

    if(abs(aa-b) < difab && abs(aa-c) < difac) a--;
    if(abs(bb-a) < difab && abs(bb-c)<difbc) b--;
    if(abs(cc-a) < difac && abs(cc-b)<difbc) c--;

    if(abs(aaa-b) < difab && abs(aaa-c) < difac) a++;
    if(abs(bbb-a) < difab && abs(bbb-c)<difbc) b++;
    if(abs(ccc-a) < difac && abs(ccc-b)<difbc) c++;

    cout<<abs(a-b)+abs(a-c)+abs(b-c)<<endl;
}
int main()
{
    optimize();
    int tc;cin>>tc;
    for(ll d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //

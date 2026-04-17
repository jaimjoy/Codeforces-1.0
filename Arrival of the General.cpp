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
    int n;cin>>n;
    vector<int> v(n);
    int mn=INT_MAX, mx=INT_MIN, mni=0, mxi=0;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i] <= mn) mn = v[i], mni=i;
        if(v[i] > mx) mx = v[i], mxi=i;
    }
    if(mxi > mni) mni++;
    cout<<(mxi+(n-1)-mni);
}

int main()
{
    optimize();
    solve();
    //int tc;cin>>tc;
    //for(int d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //

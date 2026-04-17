//                     By the name of Allah                           //
#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl    '\n'
#define YES     {cout<<"YES"<<endl;}
#define NO      {cout<<"NO"<<endl;}
#define pb      push_back
#define ff      first
#define ss      second
#define bb      begin()
#define rb      rbegin()
#define ee      end()
#define re      rend()

//Yummy Functions
int gcd(int a, int b){ if(b==0) return a; return gcd(b,a%b); }
int lcm(int a, int b){ return ( (a/gcd(a,b))*b ); }

int main()
{
    optimize();
    int tc;cin>>tc;
    while(tc--)
    {
        int n,f,k;cin>>n>>f>>k;//k=remove
        vector<int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        int sto = v[f-1];
        sort(v.rb,v.re);

        bool fn=0,fnn=0;
        if(v[k-1]==sto) fn=1;
        for(int i=0; i<k-1; i++)
        {
            if(v[i] == sto)
            {
                fn=1;
                break;
            }
        }
        for(int i=k; i<n; i++)
        {
            if(v[i] == sto)
            {
                fnn=1;
                break;
            }
        }
        if(fn && fnn) cout<<"MAYBE"<<endl;
        else if(fn && !fnn) {YES;}
        else {NO;}
    }
    return 0;
}
//            Alhamdulillah                //

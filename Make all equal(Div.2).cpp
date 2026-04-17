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

//Yummy Functions
int gcd(int a, int b){ if(b==0) return a; return gcd(b,a%b); }
int lcm(int a, int b){ return ( (a/gcd(a,b))*b ); }

int main()
{
    optimize();
    int tc;cin>>tc;
    while(tc--)
    {
        int n;cin>>n;
        vector<int> v(n);
        map<int, int> m;
        int temp=0;
        int mx=0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            m[v[i]]++;
            mx = max(mx,m[v[i]]);
        }
        sort(v.begin(),v.end());
        unique(v.begin(),v.end());
        for(int i=0; i<m.size(); i++)
        {
            temp += m[v[i]];
        }
        cout<<temp-mx<<endl;
    }
    return 0;
}
//            Alhamdulillah                //

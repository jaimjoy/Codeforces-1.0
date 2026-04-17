//                                By the name of Allah                           //
#include<bits/stdc++.h>
#include<set>
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
        vector<int> vv;
        int sum=0;
        int op=0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            sum += v[i];
        }
        if(sum%2 == 0) cout<<"0"<<endl;
        else
        {
            int ans=100;
            for(auto &x:v)
            {
                int y = x;
                int s = 0;
                while(y)
                {
                    y /= 2;
                    s++;
                    if(y%2 != x%2)
                    {
                        ans = min(ans,s);
                        break;
                    }
                }
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
//            Alhamdulillah                //

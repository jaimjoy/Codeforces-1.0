//                     By the name of Allah                           //
#include<bits/stdc++.h>
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
        map<int, int> m;
        int temp = 0;
        int temp2 = 0;
        bool f=1;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            m[v[i]]++;
        }
        for(auto &p : m)
        {
            if(p.second > temp)
            {
                temp2 = temp;
                temp = p.second;
            }
            else if(p.second > temp2)
            {
                temp2 = p.second;
            }
        }
        if(temp == temp2){NO;}
        else {YES;}
    }
    return 0;
}
//            Alhamdulillah                //

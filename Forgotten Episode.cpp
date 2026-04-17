//                                By the name of Allah                           //
#include<bits/stdc++.h>
#include<queue>
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
    set<int> s;
    int sto[tc];
    int cnt = 1;

    for(int i=0; i<tc-1; i++)
    {
        int a;cin>>a;
        s.insert(a);
    }

    set<int>::iterator it = s.begin();
    s.insert(tc+123);

    for(int i=0; i<tc; i++) sto[i] = cnt++;
    for(int i=0; i<tc; i++)
    {
        if(sto[i] != *it)
        {
            cout<<sto[i];
            break;
        }
        ++it;
    }
    return 0;
}
//            Alhamdulillah                //

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
    while(tc--)
    {
        string s,t;cin>>s>>t;
        int ssiz = s.size();
        int tsiz = t.size();
        int i=0,j=0;

        while(i<ssiz && j<tsiz)
        {
            if(t[j] == s[i])
            {
                i++;
                j++;
            }
            else
            {
                if(s[i] == '?')
                {
                    s[i] = t[j];
                    i++;
                    j++;
                }
                else i++;
            }
        }

        if(j == tsiz)
        {
            YES;
            for(int k=0; k<ssiz; k++) if(s[k] == '?') s[k] = 'a';
            cout<<s<<endl;
        }
        else {NO;}


        //cout<<s<<" "<<t<<endl;
    }
    return 0;
}
//            Alhamdulillah                //

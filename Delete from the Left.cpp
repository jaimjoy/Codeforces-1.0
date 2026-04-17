//                     By the grace of Allah                           //
#include<bits/stdc++.h>
//#include<iostream>
#include<vector>
#define endl '\n'
#define long long ll
using namespace std;

int gcd(int a, int b){ if(b==0) return a; return gcd(b,a%b);}

int main()
{
    string a,b;cin>>a>>b;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int asz = a.size();
    int bsz = b.size();
    int tt = asz+bsz;
    if(a == b) cout<<"0";
    else
    {
        if(asz<bsz)
        {
            for(int i=0; i<asz; i++)
            {
                if(a[i]==b[i]) tt -= 2;
                else break;
            }
        }
        else
        {
            for(int i=0; i<bsz; i++)
            {
                if(a[i]==b[i]) tt -= 2;
                else break;
            }
        }
        cout<<tt;
    }
    /*stringstream coutt;
    int tc;cin>>tc;
    while(tc--)
    {
    }
    cout<<coutt.str();*/
    return 0;
}
//            Alhamdulillah                //

//                     By the grace of Allah                           //
#include<bits/stdc++.h>
//#include<iostream>
#include<vector>
#define endl '\n'
#define long long ll
using namespace std;

//int gcd(int a, int b){ if(b==0) return a; return gcd(b,a%b);}

int main()
{
    int tc;cin>>tc;
    vector<int> v(tc);
    for(int i=0; i<v.size(); i++) cin>>v[i];
    int s=0, d=0, f = 0;
    while(!v.empty())// 1
    {
        if(f == 0)
        {
            if(v[0] > v.back())
            {
                s += v[0];
                v.erase(v.begin());
            }
            else
            {
                s += v.back();
                v.pop_back();
            }
            f = 1;
        }
        else
        {
            if(v[0] > v.back())
            {
                d += v[0];
                v.erase(v.begin());
            }
            else
            {
                d += v.back();
                v.pop_back();
            }
            f = 0;
        }
    }
    cout<<s<<" "<<d;
    /*stringstream coutt;
    while(tc--)
    {
    }
    cout<<coutt.str();*/
    return 0;
}
//            Alhamdulillah                //

//                     By the grace of Allah                           //
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<utility>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int gcd(int a, int b){ if(b==0) return a; return gcd(b,a%b); }

int main()
{
    optimize();
    int tc;cin>>tc;
    map<int, int> cnt;
    int res=0;
    for(int i=0; i<tc; i++)
    {
        int a;
        cin>>a;
        cnt[a]++;
        res = max(res,cnt[a]);
    }
    cout<<res;
    return 0;
}
//            Alhamdulillah                //

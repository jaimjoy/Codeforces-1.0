//                     By the grace of Allah                           //
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<utility>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int gcd(int a, int b){ if(b==0) return a; return gcd(b,a%b); }
bool isVowel(char a){ return (a =='a'||a =='e'||a =='i'||a =='o'||a =='u'); }

int main()
{
    optimize();
    int tc;cin>>tc;
    vector<pair<string, string>> v;
    while(tc--)
    {
        pair<string, string> p;cin>>p.first>>p.second;
        v.push_back({p.first,p.second});
    }
    sort(v.begin(),v.end());
    int un = unique(v.begin(),v.end())-v.begin();
    cout<<un;
    return 0;
}
//            Alhamdulillah                //

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
bool cmp(const pair<int,int> & p1, const pair<int,int> & p2)
{
    if(p1.first>p2.first) return 1;
    else if(p1.first == p2.first) return(p1.second<p2.second);
    return 0;
}

int main()
{
    optimize();
    int n,k;cin>>n>>k;
    vector<pair<int, int>> v(n);
    for(int i=0; i<n; i++) cin>>v[i].first>>v[i].second;
    sort(v.begin(),v.end(),cmp);
    int cc=0;
    for(auto u:v) if(u == v[k-1]) cc++;
    cout<<cc<<endl;
    return 0;
}
//            Alhamdulillah                //

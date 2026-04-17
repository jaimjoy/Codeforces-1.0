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
//bool cmp() checking --> p1.first>p2.first & p1.second<p2.second
bool cmp(const pair<int,int> & p1, const pair<int,int> & p2)
{
    if(p1.first>p2.first) return 1;
    else if(p1.first == p2.first) return(p1.second<p2.second);
    return 0;
}
int pairdiff(const string &s1, const string &s2)
    {int r=0;for(int i=0; i<s1.size(); i++) r += abs(s1[i]-s2[i]);return r;}

int main()
{
    optimize();
    int tc;cin>>tc;
    while(tc--)
    {
        int a,b;cin>>a>>b;
        vector<string> v(a);
        vector<int> vv;
        for(int i=0; i<a; i++) cin>>v[i];

        //Generating all possible pairs
        int sto = 0;
        for(int i=0; i<a-1; i++)
        {
            for(int j=i+1; j<a; j++)
            {
                sto = pairdiff(v[i],v[j]);
                vv.push_back(sto);
            }
            sto = 0;
        }
        sort(vv.begin(),vv.end());
        int res = *min_element(vv.begin(),vv.end());
        cout<<res<<endl;
    }
    return 0;
}
//            Alhamdulillah                //

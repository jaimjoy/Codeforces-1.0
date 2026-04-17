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
    while(tc--)
    {
        vector<int> v(3);
        for(int i=0; i<3; i++) cin>>v[i];
        sort(v.begin(),v.end());
        cout<<v[1]<<endl;
    }
    return 0;
}
//            Alhamdulillah                //

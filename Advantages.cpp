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
        int n;cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        vector<int> vv = v;

        sort(vv.begin(),vv.end());
        int mx = *max_element(vv.begin(),vv.end());
        vv.erase(max_element(vv.begin(),vv.end()));
        int mxagain = *max_element(vv.begin(),vv.end());
        for(int i=0; i<n; i++)
        {
            if(v[i] != mx) cout<<v[i]-mx<<" ";
            else cout<<v[i]-mxagain<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//            Alhamdulillah                //

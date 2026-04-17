//                     By the grace of Allah                           //
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int gcd(int a, int b){ if(b==0) return a; return gcd(b,a%b); }
bool isVowel(char a){ return (a =='a'||a =='e'||a =='i'||a =='o'||a =='u'); }

int main()
{
    optimize();
    string a,b;cin>>a>>b;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i] == b[i]) cout<<'0';
        else cout<<'1';
    }
    return 0;
}
//            Alhamdulillah                //

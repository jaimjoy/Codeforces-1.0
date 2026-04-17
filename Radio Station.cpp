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
    int n,m;cin>>n>>m;
    map<string, string> ipstore;
    while(n--)
    {
        string name,ip;cin>>name>>ip;
        ipstore[ip] = name;
    }
    while(m--)
    {
        string name,ip;cin>>name>>ip;
        ip.pop_back();
        cout<<name<<" "<<ip<<"; #"<<ipstore[ip]<<endl;
    }
    return 0;
}
//            Alhamdulillah                //

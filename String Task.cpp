//                     By the grace of Allah                           //
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
#define endl '\n'
#define long long ll
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int gcd(int a, int b){ if(b==0) return a; return gcd(b,a%b);}
bool isVowel(char c)
{
    return (c == 'a' ||
            c == 'e' ||
            c == 'i' ||
            c == 'o' ||
            c == 'u' ||
            c == 'y');
}
int main()
{
    optimize();
    string s;cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        s[i] = tolower(s[i]);
        if(!isVowel(s[i]))
            cout<<"."<<s[i];
    }
    return 0;
}
//            Alhamdulillah                //

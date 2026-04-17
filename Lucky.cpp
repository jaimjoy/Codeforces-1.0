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
    int tc;cin>>tc;
    while(tc--)
    {
        string a;cin>>a;
        int f=0,l=0;
        for(int i=0; i<6; i++)
        {
            char temp = a[i];
            if(i<3) f += temp;
            else l += temp;
        }
        if(f == l) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
//            Alhamdulillah                //

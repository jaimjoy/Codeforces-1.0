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

int main()
{
    optimize();
    string s;cin>>s;
    if(s.size()==1)
    {
        if(islower(s[0])) s[0] = toupper(s[0]);
        else s[0] = tolower(s[0]);
        cout<<s;
        return 0;
    }

    bool f = false;
    for(int i=1; i<s.size(); i++)
    {
        if(s[i]>'Z')
        {
            f=true;
            break;
        }
    }
    if(!f)
    {
        if(islower(s[0])) s[0] = toupper(s[0]);
        else s[0] = tolower(s[0]);
        for(int i=1; i<s.size(); i++) s[i] = tolower(s[i]);
        cout<<s;
    }
    else cout<<s;
    return 0;
}
//            Alhamdulillah                //

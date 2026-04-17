//                     By the grace of Allah                           //
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int gcd(int a, int b){ if(b==0) return a; return gcd(b,a%b);}
bool isVowel(char a)
{
    return (a =='a'||
            a =='e'||
            a =='i'||
            a =='o'||
            a =='u');
}
int main()
{
    optimize();
    vector<string> v;
    int cc[3] = {5,7,5};
    for(int i=0; i<3; i++)
    {
        string s;
        char c;cin>>c;
        getline(cin,s);
        s = c+s;
        v.push_back(s);
    }
    for(int i=0; i<3; i++)
    {
        int c=0;
        for(auto u:v[i])
            if(isVowel(u)) c++;

        if(c != cc[i])
            return cout<<"NO"<<endl,0;//terminates the program
    }
    cout<<"YES"<<endl;
    return 0;
}
//            Alhamdulillah                //

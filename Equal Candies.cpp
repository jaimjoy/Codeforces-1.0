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
        int s,sum=0;cin>>s;
        vector<int> eq(s);
        for(int i=0; i<s; i++) cin>>eq[i];
        int t = *min_element(eq.begin(),eq.end());

        for(int i=0; i<s; i++) sum += eq[i]-t;
        cout<<sum<<endl;
    }
    return 0;
}
//            Alhamdulillah                //

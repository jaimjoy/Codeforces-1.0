#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define pb push_back
#define all(a) (a).begin(),(a).end()
typedef vector<int> vi;
typedef vector<ll> vl;

int main()
{
    optimize();
    int n;cin>>n;
    while(n--)
    {
        string s;cin>>s;
        stack<char> st;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') st.push(s[i]);
            else
            {
                if(!st.empty() && s[i] == ')' && st.top() == '(') st.pop();
                else if(!st.empty() && s[i] == '}' && st.top() == '{') st.pop();
                else if(!st.empty() && s[i] == ']' && st.top() == '[') st.pop();
                else st.push(s[i]);
            }
        }
        if(!st.empty()) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}

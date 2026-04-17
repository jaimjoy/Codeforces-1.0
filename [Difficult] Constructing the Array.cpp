//                                By the name of Allah                           //
#include<bits/stdc++.h>
#include<queue>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl    '\n'
#define YES     {cout<<"YES"<<endl;}
#define NO      {cout<<"NO"<<endl;}
#define pb      push_back
#define ff      first
#define ss      second
#define bb      .begin()
#define ee      .end()
#define rb      .rbegin()
#define re      .rend()

//Yummy Functions
int gcd(int a, int b){ if(b==0) return a; return gcd(b,a%b); }
int lcm(int a, int b){ return ( (a/gcd(a,b))*b ); }

const int mx = 2e5+123;
int a[mx];

int main()
{
    optimize();
    int tc;cin>>tc;
    while(tc--)
    {
        priority_queue<pair<int, int>> q;

        int n;cin>>n;
        q.push({n,-1});

        int cnt = 1;
        while(!q.empty())
        {
            int l = q.top().ss*-1;
            int len = q.top().ff;
            q.pop();
            int r = l+len-1;

            int mid;
            if(len%2) mid = (l+r)/2; // this checks by default( len%2 != 0 )
            else mid = (l+r-1)/2;

            a[mid] = cnt++;

            int l1,r1,l2,r2; //at-most two sub-segment possible
            l1 = l;
            r1 = mid-1;
            l2 = mid+1;
            r2 = r;

            if(l1<=r1) q.push({ r1-l1+1 , -l1 });
            if(l2<=r2) q.push({ r2-l2+1 , -l2 });
        }

        for(int i=1; i<=n; i++) cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}
//            Alhamdulillah                //

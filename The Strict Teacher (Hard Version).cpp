//                                By the name of Allah                           //
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
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
#define ll      long long

//Yummy Function
int lcm(int a, int b){ return ( (a/__gcd(a,b))*b ); }

//////////////////////////////Main Code/////////////////////////////////

void solve()
{
    int n,m,q;cin>>n>>m>>q;
    vector<int> teacher(m);
    for(auto &u:teacher) cin>>u; //Sorted
    sort(teacher bb, teacher ee);
    while(q--)
    {
        int c;cin>>c;
        int a=0, b=0;
        if(c < teacher[0]) cout<<teacher[0]-1<<endl;
        else if(c > teacher[m-1]) cout<<n-teacher[m-1]<<endl;
        else
        {
            int t1=0, t2=0, l=0, r=m-1;
            while(l<=r)
            {
                int mid = (l+r)/2;
                int pos = teacher[mid];
                if(c < pos)
                {
                    r = mid-1;
                    t1 = pos;
                    if(mid-1 > -1) t2 = teacher[mid-1];
                    else t2 = t1;
                }
                else
                {
                    l = mid+1;
                    t1 = pos;
                    if(mid+1 <= m) t2 = teacher[mid+1];
                    else t2 = t1;
                }
            }
            if(t1>t2) swap(t1, t2);
            if(c < t1) cout<<t1-1<<endl;
            else if(c > t2) cout<<n-t2<<endl;
            else
            {
                int miid = (t1+t2)/2;
                cout<<min(abs(t1-miid), abs(t2-miid))<<endl;
            }
        }
    }
}

int main()
{
    optimize();
    //solve();
    int tc;cin>>tc;
    for(int d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //

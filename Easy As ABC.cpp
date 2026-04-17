//                                In the name of Allah                           //
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define endl '\n'
#define ff first
#define ss second
#define pb push_back
#define all(a) (a).begin(),(a).end()
#define allr(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
#define YES {cout<<"YES"<<endl;}
#define NO  {cout<<"NO"<<endl;}
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd(a,b)
/*_________________________________________________________________________________________________________*/
int dx[] = {0,-1,-1,-1,0,1,1,1};
int dy[] = {1,1,0,-1,-1,-1,0,1};

void solve()
{
    char grid[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++) cin>>grid[i][j];
    }
    priority_queue<string,vector<string>, greater<string>> q;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            for(int k=0; k<8; k++)
            {
                int ii = i+dx[k];
                int jj = j+dy[k];
                if(ii >= 0 && jj <3 && jj >= 0 && ii<3)
                {
                    for(int l=0; l<8; l++)
                    {
                        int iii = ii+dx[l];
                        int jjj = jj+dy[l];
                        if(iii >= 0 && jjj < 3 && jjj >= 0 && iii < 3)
                        {
                            if((i != ii || j != jj) && (jj != jjj || ii != iii) && (i != iii || j != jjj))
                            {
                                string s;
                                s += grid[i][j];
                                s += grid[ii][jj];
                                s += grid[iii][jjj];
                                q.push(s);
                            }
                        }
                    }
                }
            }
        }
    }
    cout<<q.top()<<endl;
}

int main()
{
    optimize();
    solve();
    //ll t;cin>>t;
    //for(ll d=1; d<=t; d++) solve();

    return 0;
}
//            Alhamdulillah                //

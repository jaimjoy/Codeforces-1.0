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
int gcd(int a, int b){ if(b==0) return a; return gcd(b,a%b); }
int lcm(int a, int b){ return ( (a/gcd(a,b))*b ); }

//////////////////////////////Main Code/////////////////////////////////

void solve()
{
    int n,m;cin>>n>>m;
    char man[n][m];
    int i, j;
    int row=0, col=0, ans=INT_MIN;
    for(i=0; i<n; i++)
    {
        int hashC=0;
        for(j=0; j<m; j++)
        {
            cin>>man[i][j];
            if(man[i][j] == '#') hashC++;
        }
        if(ans < hashC)
        {
            ans = hashC;
            row = i;
        }
    }
    ans = (ans/2)+1;
    for(int i=row; i<row+1; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(man[i][j] == '#') ans--;
            if(ans == 0) {col = j; break;}
        }
    }
    cout<<row+1<<" "<<col+1<<endl;
}

int main()
{
    optimize();
    //solve();
    int tc;cin>>tc;
    while(tc--) solve();

    return 0;
}
//            Alhamdulillah                //

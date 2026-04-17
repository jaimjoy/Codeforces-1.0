#include<bits/stdc++.h>
using namespace std;

int main()
{
    stringstream coutt;
    long long int tc; cin>>tc;
    while(tc--)
    {
        int x,y,cnt=0; cin>>x>>y;
        while(x > 0 && y > 0)
        {
            if(x==1 && y==1) break;
            else if(x>y)
            {
                x -= 2;
                y -= 1;
                cnt++;
            }
            else
            {
                x -= 1;
                y -= 2;
                cnt++;
            }
        }
        coutt<<cnt<<endl;
    }
    cout<<coutt.str();
    return 0;
}



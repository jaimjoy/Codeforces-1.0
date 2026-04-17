#include<bits/stdc++.h>
using namespace std;

int main()
{
    stringstream coutt;
    long long int N,Q; cin>>N>>Q;
    int *a = new int[N];
    int *b = new int[N];
    for(int i=1; i<=N; i++) cin>>a[i];
    for(int i=1; i<=N; i++) cin>>b[i];
    while(Q--)
    {
        long long int L=0,R=0,sum=0,sub=0;
        int X;
        cin>>X>>L>>R;
        if(X==1)
        {
            for(int i=L; i<=R; i++) sum += a[i];
            coutt<<sum<<endl;
        }
        else
        {
            for(int i=L; i<=R; i++)
            {
                if(sub==0) sub = b[i];
                else sub -= b[i];
            }
            coutt<<sub<<endl;
        }
    }
    cout<<coutt.str();
    return 0;
}


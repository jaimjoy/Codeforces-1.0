#include<bits/stdc++.h>
using namespace std;

int main()
{
    stringstream coutt;
    long long int tc; cin>>tc;
    while(tc--)
    {
        int n; cin>>n;
        int *capacity = new int[n];
        for(int i=0; i<n; i++) cin>>capacity[i];
        int q; cin>>q;
        while(q--)
        {
            int k,m=1;cin>>k;
            bool fou = false;
            while(!fou && m<=n)
            {
                int sum = 0;
                for(int i=0; i<m; i++) sum += capacity[i];
                if(k<=sum) fou = true;
                else m++;
            }
            if(fou) coutt<<m<<endl;
            else coutt<<"-1"<<endl;
        }
    }
    cout<<coutt.str();
    return 0;
}



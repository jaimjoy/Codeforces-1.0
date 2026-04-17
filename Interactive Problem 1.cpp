#include<bits/stdc++.h>
using namespace std;

string query(int mid)
{
    //endl gives auto flash of program
    cout<<mid<<endl;
    string s;cin>>s;
    return s;
}
int main()
{
    int l=1, r=1000000, ans;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(query(mid) == "<") r = mid-1;
        else ans = mid, l = mid+1;
    }
    cout<<"! "<<ans<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define nl endl

//vector<int> v = {4,8,9,12,15,14};
  vector<int> v = {9,8,4,2,12,15,14};

int isOK(int mid)
{
    if(v[mid] <= v[0]) return 0;
    else return 1;
}
int main()
{
    int n=v.size();
    int l=0, r=n;
    while(l<r)
    {
        int mid = (l+r)/2;
        if(isOK(mid) == 0) l = mid+1;
        else r = mid;
    }
    cout<<l-1<<nl;
    return 0;
}

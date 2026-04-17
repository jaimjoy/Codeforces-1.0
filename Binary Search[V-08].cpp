#include<bits/stdc++.h>
using namespace std;
#define nl endl
int main()
{
    vector<int> v = {1,2,2,5,7,7,10,15,17};

    int target = 7;
    int lowerBound = lower_bound(v.begin(), v.end(), target) - v.begin();
    int upperBound = upper_bound(v.begin(), v.end(), target) - v.begin();
    cout<<lowerBound<<" "<<upperBound<<nl;

    int l=0, r=v.size();
    while(l < r)
    {
        int mid = (l+r)/2;
        if(v[mid] < target) l = mid+1;
        else r = mid;
    }
    cout<<l<<' ';
    l = 0;
    r = v.size();
    while(l < r)
    {
        int mid = (l+r)/2;
        if(v[mid] <= target) l = mid+1;
        else r = mid;
    }
    cout<<r<<nl;
    return 0;
}

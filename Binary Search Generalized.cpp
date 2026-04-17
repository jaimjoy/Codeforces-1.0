#include<bits/stdc++.h>
using namespace std;
#define nl endl

int isOK(int mid, int target, vector<int>&nums)
{
    if(nums[mid] < target) return 0;
    else return 1;
}
int main()
{
    vector<int> nums = {1,2,3,7,7,10,11};
    int n=nums.size();
    int target = 7;
    int l=0, r=n;
    while(l<r)
    {
        int mid = (l+r)/2;
        if(isOK(mid,target,nums) == 0) l = mid+1;
        else r = mid;
    }
    //lower
    cout<<l<<nl;
    return 0;
}

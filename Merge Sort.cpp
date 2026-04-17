//                                In the name of Allah                           //
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int n, arr[100005], temp[100005], inversions=0;

void merge(int l, int r)
{
    int mid = (l+r)/2;
    int i1=l, i2=mid+1, j=l;
    while(i1<=mid && i2<=r)
    {
        if(arr[i1] < arr[i2]) temp[j] = arr[i1], i1++;
        else temp[j] = arr[i2], i2++;
        j++;
    }

    while(i1<=mid) temp[j] = arr[i1], i1++, j++;
    while(i2<=r) temp[j] = arr[i2], i2++, j++;

    for(int i=l; i<=r; i++) arr[i] = temp[i];
}
void mergesort(int l, int r)
{
    if(l == r) return;
    int mid = (l+r)/2;

    //Divide
    mergesort(l, mid);
    mergesort(mid+1, r);
    //Conquer
    merge(l,r);
}

void solve()
{
    cin>>n;
    for(int i=0; i<n; i++) cin>>arr[i];

    mergesort(0, n-1);
    for(int i =0; i<n; i++) cout<<arr[i]<<" ";
    //cout<<inversions<<endl;
}

int main()
{
    optimize();
    int tc;cin>>tc;
    for(int d=1; d<=tc; d++) solve();
    return 0;
}
//            Alhamdulillah                //

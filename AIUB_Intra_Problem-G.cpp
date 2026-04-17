#include<iostream>
using namespace std;

int main()
{
    int A;cin>>A;
    int sq = A*A;
    int area = (A-1)*(A+1);
    cout<<abs(sq-area);
    /*
    Or Just print '1' then boom!! the judge will accept the solution.
    */
    return 0;
}


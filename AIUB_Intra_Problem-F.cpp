#include<iostream>
using namespace std;

void lcm(long long int a, long long int b)
{
    long long int f = a,s = b;
    long long int two = 1, three = 1, ex = 1;
    while(f>1)
    {
        if(f%2 == 0)
        {
            two *= 2;
            f /= 2;
        }
        else if(f%3 == 0)
        {
            three *= 3;
            f /= 3;
        }
        else
        {
            ex *= f;
            break;
        }
    }
    long long int againtwo = 1, againthree = 1, againex = 1;
    while(s>1)
    {
        if(s%2 == 0)
        {
            againtwo *= 2;
            s /= 2;
        }
        else if(s%3 == 0)
        {
            againthree *= 3;
            s /= 3;
        }
        else
        {
            againex *= s;
            break;
        }
    }
    if(two>againtwo) swap(two,againtwo);
    if(three>againthree) swap(three,againthree);
    if(ex>againex) swap(ex,againex);

    long long int comp = againtwo*againthree*againex;
    if(comp == a || comp == b) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}
int main()
{
    long long int a,b;cin>>a>>b;
    lcm(a,b);
    return 0;
}


#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double x=0.0;
    int i,n;
    cin>>n;
    if(n==0)
    {
        x=0.0000000000;
    }
    if(n==1)
    {
        x=0.5000000000;
    }
    for(i=2;i<=n;i++)
    {
        if(i==2)
        {
            x=2.0+(1/2.00);
            x=1.0/x;
        }
        else
        {
            x=2.00+x;
            x=1.0/x;
        }
    }
    x=1+x;
    std::cout<<std::fixed<<std::setprecision(10)<<x<<endl;
}


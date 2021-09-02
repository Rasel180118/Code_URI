#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double x,y;
    double result;
    cin>>x>>y;
    result=x/y;
    std::cout<<std::fixed<<std::setprecision(2)<<result<<endl;
    return 0;
}

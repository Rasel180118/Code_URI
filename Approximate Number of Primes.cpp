#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double x, y;
    cin>>n;
    x=n/log(n);
    y=x*1.25506;

    std::cout << std::fixed << std::setprecision(1)<<x<<" "<<y<<endl;
}

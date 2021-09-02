#include<iostream>
using namespace std;
int main()
{
    int n;
    long long int x,y;
    cin>>n>>x;

    while(n!=0 && x!=0)
    {
        y=n*x;
        cout<<y<<endl;
        cin>>n>>x;
    }
    return 0;
}

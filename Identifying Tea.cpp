#include<iostream>
using namespace std;
int main()
{
    int i,a,n;
    cin>>n;
    int con=0;

    for(i=0;i<5;i++)
    {
        cin>>a;
        if(n==a)
        {
            con++;
        }
    }
    cout<<con<<endl;
}

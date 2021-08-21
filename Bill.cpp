#include<iostream>
using namespace std;
int main()
{
    int x,n,i;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x%2==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<"1"<<endl;
        }
    }
}

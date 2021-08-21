#include<iostream>
using namespace std;
int main()
{
    string x;
    int i,n,t;
    cin>>t;

    for(i=0;i<t;i++)
    {
        cin>>x>>n;
        if(x=="Thor")
        {
            cout<<"Y"<<endl;
        }
        else
        {
            cout<<"N"<<endl;
        }
    }
}

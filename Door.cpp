#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int h,m,s;
        cin>>h>>m>>s;
        if(h<10)
            {
                cout<<"0";
                cout<<h;
                cout<<":";
            }
        if(m<10)
        {
            cout<<"0";
            cout<<m;
        }

        if(s==1)
        {
            cout<<" - A porta abriu!"<<endl;
        }
        else
        {
            cout<<" - A porta fechou!"<<endl;
        }
    }
}


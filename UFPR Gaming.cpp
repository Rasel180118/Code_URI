#include<iostream>
using namespace std;
int main()
{
    int a,n;
    while(cin>>n>>a)
    {
        int con=0;
        for(int i=0,b,c;i<n;i++)
        {
            cin>>b>>c;
            if(b==a && !c)
            {
                con++;
            }
        }
        cout<<con<<endl;
    }
}

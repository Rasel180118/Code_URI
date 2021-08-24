#include<iostream>
using namespace std;
int main()
{
    string c;
    int m,n;
    cin>>m>>n;

    for(int i=0;i<n;i++)
    {
        cin>>c;
        if(c=="fechou")
        {
            m++;
        }
        else
        {
            m--;
        }
    }
    cout<<m<<endl;
}

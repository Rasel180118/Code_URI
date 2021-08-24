#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c,d;
    a=b=c=d=0;
    cin>>n;

    while(n--)
    {
        int x;
        cin>>x;

        if(x%2 ==0)
        {
            a++;
        }
        if(x%3 ==0)
        {
            b++;
        }
        if(x%4 ==0)
        {
            c++;
        }
        if(x%5 ==0)
        {
            d++;
        }
    }
        cout<<a<<" Multiplo(s) de 2"<<endl;
        cout<<b<<" Multiplo(s) de 3"<<endl;
        cout<<c<<" Multiplo(s) de 4"<<endl;
        cout<<d<<" Multiplo(s) de 5"<<endl;
}

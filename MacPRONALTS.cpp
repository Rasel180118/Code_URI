#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,n;
    double sum=0;
    cin>>n;

    for(i=0;i<n;i++)
    {
            int m,num1;
            cin>>m>>num1;
            if(m==1001)
            {
                sum=sum +(1.50 * num1);
            }
            else if(m==1002)
            {
                sum=sum +(2.50 * num1);
            }
            else if(m==1003)
            {
                sum=sum +(3.50 * num1);
            }
            else if(m==1004)
            {
                sum=sum +(4.50 * num1);
            }
            else if(m==1005)
            {
                sum=sum +(5.50 * num1);
            }
    }
    cout<< fixed <<setprecision(2)<<sum<<endl;
}

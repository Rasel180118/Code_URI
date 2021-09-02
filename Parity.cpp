#include<iostream>
using namespace std;
int main()
{
    int i,count=0;
    string str;
    cin>>str;

    for(i=0;i<str.length();i++)
    {
        if(str[i]=='1')
        {
            count++;
        }
    }
    if(count%2==0)
    {
        str=str+'0';
    }
    else
    {
        str=str+'1';
    }
    cout<<str<<endl;
    return 0;
}

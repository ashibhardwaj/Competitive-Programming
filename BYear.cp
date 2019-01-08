#include<iostream>
using namespace std;

int main()
{
    int year, flag=0, y, a, b, c, d;
    cin>>year;
    while(flag==0)
    {
        year++;
        y=year;
        a=y%10;
        y/=10;
        b=y%10;
        y/=10;
        c=y%10;
        y/=10;
        d=y%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
            flag++;
    }
    cout<<year;
    return 0;
}


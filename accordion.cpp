#include<iostream>
using namespace std;

int main()
{
    string a;
    cin>>a;
    int x=0, y=0;
    int count=0, flag1=0, flag2=0, flag3=0, flag4=0;
    int n=a.length();
    for(int i=0; i<n-2; i++)
    {
        if(a[i]=='[' && flag1==0)
        {
            flag1++;
        }
        if(a[i]==':' && flag1==1)
        {
            flag2++;
            x=i;
            break;
        }
    }
    if(flag1!=0 && flag2!=0)
    {
        for(int i=a.length()-1; i>x; i--)
        {
            if(a[i]==']' && flag4==0)
            {
                flag4++;
            }
            if(a[i]==':' && flag3==0 && flag4==1)
            {
                flag3++;
                y=i;
                break;
            }
        }
    }
    for(int i=x; i<y; i++)
    {
        if(a[i]=='|')
        {
            count++;
        }
        
    }
    if(flag1==1 && flag2==1 && flag3==1 && flag4==1)
        cout<<count+4;
    else
        cout<<"-1";
    return 0;
}

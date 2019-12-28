#include<iostream>
#include<conio.h>
using namespace std;
int *max(int &a,int &b,int &c)
{
    int big;
    int sort[3];
        if(a<b)
        {
            sort[0]=a;
            sort[1]=b;
        }
        else
        {
            sort[0]=b;
            sort[1]=a;
        }
        for(int i=0;i<=2;i++)
        {
            if(c<sort[i])
            {
                for(int a=i;a<=2;a++){sort[i+1]=sort[i];}
                sort[i]=c;
            }
        }
    int *ptr;
    ptr=sort;
    return(ptr);
}
int main()
{
    int a,b,c;
    cout<<"enter the numbers ";
    cin>>a>>b>>c;
    int *big;
    big=max(&a,&b,&c);
    for(int i=0;i<=2;i++)
    {
        cout<<big<<" ";
        big++;
    }
}

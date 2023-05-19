#include<iostream>

using namespace std;

int main()
{
    int a[7],i,p1,p3;
     cout<<"Enter the elements :"<<endl;
    for(i=0;i<7;i++)
    {
       
        cin>>a[i];
    }
    for(i=0;i<7;i++)
    {
        if(a[i]+a[i+1]+a[i+2]==12)
{
        cout<<"yes"<<endl;


        p1=i;
        
        p3=i+2;
    }

       
    }
        cout<<p1<<endl;
        
        cout<<p3<<endl;
    return 0;
}
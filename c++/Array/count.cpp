#include<iostream>

using namespace std;

int main()
{
    int a[10],i,n,count=0;
    cout<<"Enter the elements"<<endl;
    for(i=0;i<10;i++)
    {
        
        cin>>a[i];
    }
    cout<<"Enter the number :"<<endl;
    cin>>n;
    for(i=0;i<10;i++)
    {
        if (a[i]==n)
        
        count++;
       
    }
     cout<<count<<endl;
    return 0;

}
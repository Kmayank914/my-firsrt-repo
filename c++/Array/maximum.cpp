#include<iostream>
#include<climits>
using namespace std;

int main() { 

    int a[10],i,max=INT_MIN;
    for(i=0;i<10;i++)
    {
        cout<<"Enter 10 elements";
        cin>>a[i];
    }
    for(i=0;i<10;i++)
    {
        if(a[i]>max)
        max=a[i];
       
    }
     cout<<max<<"is the biggest";

    return 0;
}
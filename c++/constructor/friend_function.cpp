#include<iostream>
using namespace std;
class Num2;
class Num1{
    int a;
    public:
    void set(){
        cout<<"Enter first number";
        cin>>a;
        //a=10;
    }
    friend int max(Num1 A1,Num2 A2);
};
class Num2{
    int b;
    public:
    void set(){
        cout<<"Enter second number";
        cin>>b;
        //b=10;
    }
    friend int max(Num1 A1,Num2 A2);
};
int max(Num1 A1,Num2 A2){
    if(A1.a>A2.b){
    return (A1.a);}
    else if(A1.a<A2.b){
    return (A2.b);}
    else 
    return 1;
}
int main(){
    Num1 A3;
    Num2 A4;
    A3.set();
    A4.set();
    cout<<"The maximum is :"<<max(A3,A4)<<endl;
    return 0;
}
#include<iostream>
using namespace std;
class Item{
    private:
    int code_no;
    float price;
    int qty;
    public:
    void display(){
        code_no=123;
        price=55.55;
        qty=54;
        cout<<"code_no="<<code_no<<endl;
        cout<<"price="<<price<<endl;
        cout<<"qty="<<qty<<endl;
    }
};
int main()
{
    Item one;
    one.display();
    return 0;
}
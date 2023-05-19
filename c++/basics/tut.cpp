#include<iostream>
using namespace std;
class Item {
    public:
    int code_no;
    float price;
    int qty;

};
int main(){
    Item one;
    one.code_no=123;
    one.price=55.55;
    one.qty=43;
    cout<<"code_no="<<one.code_no<<endl;
    cout<<"price"<<one.price<<endl;
    cout<<"qty"<<one.qty<<endl;
    return 0;
}

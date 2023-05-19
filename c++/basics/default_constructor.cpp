#include<iostream>
using namespace std;

    class A
    {
        private:
        int x,y,z;
        public:
        A()
        {
            x=9;
            y=1;
            z=45;
        }
        void display()
        {
            cout<<"value of  x y and z: "<<x<<" "<<y<<" "<<z;
        }
         
    };
    int main(){
        A a1;
        a1.display();
        return 0;
    }

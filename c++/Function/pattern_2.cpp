#include<iostream>
using namespace std;
void printPattern(int n);
int main(){
    int n;
    cout<<"Enter the number of lines";
    cin>>n;
    printPattern(n);
    return 0;
}
void printPattern(int n){
    for(int i=n;i>=1;i--){
        for(int j=n-i;j>=1;j--){
            cout<<"";
        }
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
      
        cout<<endl;
    }
}
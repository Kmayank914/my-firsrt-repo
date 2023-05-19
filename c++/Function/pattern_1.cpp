#include<iostream>
using namespace std;
void printPattern(int n);
int main(){
    int n;
    cout<<"Enter the number of lines to print the pattern";
    cin>>n;
    printPattern(n);
    return 0;
}
void printPattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
#include <iostream>
using namespace std;

int add(int,int);

int main() {
    int num1,num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    cout<<add(num1,num2);
}
int add(int num1,int num2) {
    return num1+num2;
}
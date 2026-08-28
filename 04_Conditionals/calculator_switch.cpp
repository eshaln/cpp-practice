#include <iostream>
using namespace std;
int main() {
    double num1;
    double num2;
    char op;

    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;

    cout<<"Enter the operator: ";
    cin>>op;

    switch (op) {
        case '+':
            cout<<num1+num2;

            break;
        case '-':
            cout<<num1-num2;
            break;

        case '*':
            cout<<num1*num2;
            break;

        case '/':
            if (num2!=0) {
                cout<<num1/num2;
            }
            else {
                cout<<"Cannot divide by zero";
            }
            break;



        default:
            cout<<"Wrong input";
            break;




    }
    return 0;

}
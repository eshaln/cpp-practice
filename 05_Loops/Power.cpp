#include <iostream>
using namespace std;
int main() {
    int base;
    int exponent;
    int result=1;
    cout<<"Enter a base: ";
    cin>>base;
    cout<<"Enter a exponent: ";
    cin>>exponent;
    for (int i=1;i<=exponent;i++) {
        result*=base;

    }
    cout<<"Result: "<<result;
    return 0;
}
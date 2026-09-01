#include <iostream>
using namespace std;

int main() {
    int number;
    int reverse=0;

    cout<<"Enter a number: ";
    cin>>number;
    int original=number;
    while (number!=0) {
        int digit=number%10;
        reverse=reverse*10+digit;
        number=number/10;

    }

    if (original==reverse) {
        cout<<"Its a Palindrome"<<endl;

    }
    else {
        cout<<"Its not a Palindrome"<<endl;
    }
    return 0;
}
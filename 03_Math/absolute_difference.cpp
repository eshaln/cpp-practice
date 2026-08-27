#include <iostream>
using namespace std;
int main() {
    int num1,num2;
    cout<<"Enter num1: "<<"\n";
    cin>>num1;
    cout<<"Enter num2: "<<"\n";
    cin>>num2;

    int difference=abs(num1-num2);
    cout<<"Difference: "<<difference;

    return 0;

}
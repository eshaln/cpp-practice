#include<iostream>
using namespace std;
int main() {
    int number;
    int sum=0;
    int result=0;

    cout<<"Enter a number: ";
    cin>>number;
    while (number!=0) {
        result=number%10;
        number=number/10;
        sum=sum+result;

    }
    cout<<"Sum: "<<sum;
    return 0;
}
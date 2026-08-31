#include<iostream>
using namespace std;
int main() {
    int number;
    int count=0;


    cout<<"Enter a number: ";
    cin>>number;
    while (number!=0) {

        number=number/10;
        count++;

    }
    cout<<"Count: "<<count;
    return 0;
}
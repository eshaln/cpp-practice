#include <cmath>
#include <iostream>
using namespace std;
int main() {
    double weight;
    double height;

    cout<<"Enter weight: ";
    cin>>weight;

    cout<<"Enter height: ";
    cin>>height;

    height=pow(height,2);

    double bmi=weight/height;
    cout<<"BMI: "<<bmi;
    return 0;

}
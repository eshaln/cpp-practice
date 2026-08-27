#include <cmath>
#include <iostream>
#include <math.h>
using namespace std;
int main() {
    double a;
    double b;
    double c;

    cout<<"Enter side A: "<<"\n";
    cin>>a;
    cout<<"Enter side B: "<<"\n";
    cin>>b;

    a=pow(a,2);
    b=pow(b,2);
    c=sqrt(a+b);

    cout<<"Hypotenuse is: "<<c<<"\n";

    return 0;
}
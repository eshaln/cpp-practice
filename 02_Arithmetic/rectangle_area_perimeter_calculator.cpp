#include <iostream>
using namespace std;
 int main() {
  double width;
  double length;

  cout<<"Enter width: ";
  cin>>width;
  cout<<"Enter length: ";
  cin>>length;

  double area = width*length;
  cout<<"Area: "<<area<<"\n";

  double perimeter=2*(length+width);
     cout<<"Perimeter: "<<perimeter<<"\n";

     return 0;

 }
#include <iostream>
using namespace std;

int maxOfThree(int a, int b, int c) {
    if (a>=b && a>=c) {
        return a;
    }
    if (b>=a && b>=c) {
        return b;
    }
    else {
        return c;
    }
}
int main() {
    cout<<"Enter three numbers: ";
    int a, b, c;
    cin>>a>>b>>c;
    cout<<"Maximum : "<<maxOfThree(a, b, c);
    return 0;
}
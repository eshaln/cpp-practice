#include <iostream>
using namespace std;

int calculateFactorial(int number) {
    int fact = 1;
    for (int i = 1; i <= number; i++) {
        fact = fact * i;

    }
    return fact;
}
int main() {
    cout << calculateFactorial(10) << endl;
}
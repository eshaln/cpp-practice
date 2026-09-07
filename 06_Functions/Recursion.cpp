#include <iostream>
using namespace std;

int backwardNum(int num) {
    for (int i=0;i<num;i++){
        if (num==0) {
            return num;
        }
        else {
            cout<<num<<" ";
            return backwardNum(num-1);
        }
    }
}
int main() {

    backwardNum(5);
}
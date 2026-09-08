#include <iostream>
using namespace std;
int main () {
    string sentence;
    string addition;

    cout<<"Enter a sentence: ";
    getline(cin,sentence);

    cout<<"Enter something to add: ";
    getline(cin,addition);

    sentence.append(" ");
    sentence.append(addition);

    cout<<"Result: "<<sentence<<endl;
    return 0;

}
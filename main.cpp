#include <iostream>
using namespace std;

class MyClass {
public:
    int myNum;
    string myString;
};

int main() {
    cout << "Hello World";
    MyClass obj;
    obj.myNum = 15;
    obj.myString = "C++ Programming";
    cout << "\nMy Number: " << obj.myNum;
    cout << "\nMy String: " << obj.myString;
    // setting up my file </3 dont judge me mane 
    return 0;
}

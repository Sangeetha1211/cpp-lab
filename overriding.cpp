#include <iostream>
using namespace std;

class Base {
   public:
    void display() {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base {
   public:
    void display() {
        cout << "Derived Function" << endl;
    }
};

int main() {
    Derived d1, d2;
    d1.display();
    d2.Base::display();

    return 0;
}

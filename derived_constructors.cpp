#include <iostream>
using namespace std;

class Base {
public:
    int Base_num;

    Base() {
        cout << "Constructor of base class" << endl;
        Base_num = 1;
    }

    Base(int n1) {
        cout << "Constructor of base class" << endl;
        Base_num = n1;
    }
};

class Derived : public Base {
public:
    int Derived_num;

    Derived(int n1) {
        cout << "Constructor of derived class" << endl;
        Derived_num = n1;
    }

    Derived(int n1, int n2) : Base(n1) {
        cout << "Constructor of derived class" << endl;
        Derived_num = n2;
    }
};

int main() {
    Derived *ptr1 = new Derived(2);
    cout << "ptr1 -> Base_num: " << ptr1->Base_num << ", Derived_num: " << ptr1->Derived_num << endl;

    Derived *ptr2 = new Derived(1, 2);
    cout << "ptr2 -> Base_num: " << ptr2->Base_num << ", Derived_num: " << ptr2->Derived_num << endl;

    delete ptr1;
    delete ptr2;

    return 0;
}

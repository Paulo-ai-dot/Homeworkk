#include <iostream>
using namespace std;

class Base {
private:
    int number;

public:
    Base(int num) {
        number = num;
    }

    void Base_function() {
        cout << "Base number is " << number << endl;
    }
};

class Midl : virtual public Base {
public:
    Midl(int num) : Base(num) {}
};

class Mid2 : virtual public Base {
public:
    Mid2(int num) : Base(num) {}
};

class Final : public Midl, public Mid2 {
public:
    Final(int num) : Base(num), Midl(num), Mid2(num) {}
};

int main() {
    Final f(1);

    f.Base_function();

    return 0;
}
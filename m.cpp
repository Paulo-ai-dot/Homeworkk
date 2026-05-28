#include <iostream>
using namespace std;

class Midl {
private:
    int number;

public:
    Midl(int num) {
        number = num;
    }

    void Midl_function() {
        cout << "Midl number is " << number << endl;
    }
};

class Mid2 {
private:
    int number;

public:
    Mid2(int num) {
        number = num;
    }

    void Mid2_function() {
        cout << "Mid2 number is " << number << endl;
    }
};

class Final : public Midl, public Mid2 {
public:
    Final(int num1, int num2)
        : Midl(num1), Mid2(num2) {}
};

int main() {
    Final f(1, 2);

    f.Midl_function();
    f.Mid2_function();

    return 0;
}
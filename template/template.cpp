#include <iostream>

using std::cout;
using std::endl;

template<typename T>
class Calcu {
private:
    T First;
    T Second;

public:
    Calcu(T First, T Second) {
        this->First = First;
        this->Second = Second;
    }

    void swap() {
        T temp = this->First;
        this->First = this->Second;
        this->Second = temp;
    }

    void print() {
        cout << this->First << endl;
        cout << this->Second << endl;
    }

    void printAdd() {
        cout << this->First + this->Second << endl;
    }
};

int main() {
    Calcu<int> var(10, 30);
    var.printAdd();
    var.print();
    var.swap();
    var.printAdd();
    var.print();

    Calcu<char> var2('a', 'c');
    var2.printAdd();
    var2.print();
    var2.swap();
    var2.printAdd();
    var2.print();

    return 0;
}

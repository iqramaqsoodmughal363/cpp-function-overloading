#include <iostream>
using namespace std;

class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Math m;
    cout << "Sum (int): " << m.add(5, 3) << endl;
    cout << "Sum (double): " << m.add(5.5, 3.2) << endl;

    return 0;
}

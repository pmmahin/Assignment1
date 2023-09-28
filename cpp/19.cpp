#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 5, num2 = 10;
    double dbl1 = 3.14, dbl2 = 6.28;

    cout << "Before swapping:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
    cout << "dbl1 = " << dbl1 << ", dbl2 = " << dbl2 << endl;

    // Swap integers
    swapValues(num1, num2);

    // Swap doubles
    swapValues(dbl1, dbl2);

    cout << "After swapping:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
    cout << "dbl1 = " << dbl1 << ", dbl2 = " << dbl2 << endl;

    return 0;
}



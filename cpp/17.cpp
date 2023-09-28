#include <iostream>
using namespace std;

class NumberSwap {
private:
    int num1;
    int num2;

public:
    NumberSwap(int a, int b) : num1(a), num2(b) {}

    void swap(); // Declaration of swap function

    void display() {
        cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
    }

    friend void swapNumbers(NumberSwap& ns); // Declaration of friend function
};

// Definition of the friend function to swap number
void swapNumbers(NumberSwap& ns) {
    ns.num1 = ns.num1 + ns.num2;
    ns.num2 = ns.num1 - ns.num2;
    ns.num1 = ns.num1 - ns.num2;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    NumberSwap ns(num1, num2);

    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    swapNumbers(ns); // Call the friend function to swap numbers

    ns.display();

    return 0;
}



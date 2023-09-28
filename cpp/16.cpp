#include <iostream>
#include <string>
using namespace std;
class MyString {
private:
    string str;

public:
    MyString() : str("") {}

    MyString(string s) : str(s) {}

    // Overloading the + operator for string concatenation
    MyString operator+(const MyString& other) const {
        MyString result;
        result.str = this->str + other.str;
        return result;
    }

    void display() const {
        cout<<str<<endl;
    }
};

int main() {
    MyString str1("Hello, ");
    MyString str2("world!");

    MyString result = str1 + str2;

    cout << "Concatenated String: ";
    result.display();

    return 0;
}


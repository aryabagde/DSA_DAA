#include <iostream>
using namespace std;

int main() {

    cout << "===== ARITHMETIC OPERATORS =====\n";
    int a = 10, b = 3;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;

    cout << "\n===== RELATIONAL (COMPARISON) OPERATORS =====\n";
    cout << "a == b : " << (a == b) << endl;
    cout << "a != b : " << (a != b) << endl;
    cout << "a > b  : " << (a > b) << endl;
    cout << "a < b  : " << (a < b) << endl;
    cout << "a >= b : " << (a >= b) << endl;
    cout << "a <= b : " << (a <= b) << endl;

    cout << "\n===== LOGICAL OPERATORS =====\n";
    bool x = true, y = false;
    cout << "x && y : " << (x && y) << endl;
    cout << "x || y : " << (x || y) << endl;
    cout << "!x     : " << (!x) << endl;

    cout << "\n===== ASSIGNMENT OPERATORS =====\n";
    int c = 5;
    c += 3; cout << "c += 3 -> " << c << endl;
    c -= 2; cout << "c -= 2 -> " << c << endl;
    c *= 2; cout << "c *= 2 -> " << c << endl;
    c /= 2; cout << "c /= 2 -> " << c << endl;
    c %= 3; cout << "c %= 3 -> " << c << endl;

    cout << "\n===== INCREMENT / DECREMENT OPERATORS =====\n";
    int d = 5;
    cout << "d++ = " << d++ << endl;
    cout << "++d = " << ++d << endl;
    cout << "d-- = " << d-- << endl;
    cout << "--d = " << --d << endl;

    cout << "\n===== BITWISE OPERATORS =====\n";
    int p = 5, q = 3;
    cout << "p & q  = " << (p & q) << endl;
    cout << "p | q  = " << (p | q) << endl;
    cout << "p ^ q  = " << (p ^ q) << endl;
    cout << "~p     = " << (~p) << endl;
    cout << "p << 1 = " << (p << 1) << endl;
    cout << "p >> 1 = " << (p >> 1) << endl;

    cout << "\n===== CONDITIONAL (TERNARY) OPERATOR =====\n";
    int max = (a > b) ? a : b;
    cout << "Max of a and b = " << max << endl;

    cout << "\n===== SIZEOF OPERATOR =====\n";
    cout << "sizeof(int) = " << sizeof(int) << endl;
    cout << "sizeof(double) = " << sizeof(double) << endl;

    cout << "\n===== COMMA OPERATOR =====\n";
    int e;
    e = (a = 2, b = 4, a + b);
    cout << "e = (a=2, b=4, a+b) -> " << e << endl;

    cout << "\n===== ADDRESS & DEREFERENCE OPERATORS =====\n";
    int num = 10;
    int* ptr = &num;
    cout << "Address of num = " << &num << endl;
    cout << "Value using *ptr = " << *ptr << endl;

    cout << "\n===== TYPE CASTING OPERATOR =====\n";
    double result = (double)a / b;
    cout << "(double)a / b = " << result << endl;

    cout << "\n===== MEMBER ACCESS OPERATORS =====\n";
    struct Point {
        int x, y;
    };
    Point pt;
    pt.x = 5;
    pt.y = 10;
    cout << "pt.x = " << pt.x << ", pt.y = " << pt.y << endl;

    cout << "\n===== END OF ALL C++ OPERATORS =====\n";

    return 0;
}

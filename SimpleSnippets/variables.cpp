#include <iostream>
using namespace std;

/* ---------- Global Variable ---------- */
int globalVar = 100;

/* ---------- User-defined type ---------- */
struct Student {
    int roll;
};

void staticExample() {
    static int staticVar = 0;   // static variable
    staticVar++;
    cout << "Static variable value: " << staticVar << endl;
}

int main() {

    /* ---------- Primitive / Built-in Variables ---------- */
    int a = 10;
    float b = 3.5f;
    double c = 3.14159;
    char d = 'A';
    bool e = true;

    /* ---------- const Variable ---------- */
    const int CONST_VAR = 50;

    /* ---------- auto Variable ---------- */
    auto autoVar = 20;      // compiler deduces int

    /* ---------- Local Variable ---------- */
    int localVar = 5;

    /* ---------- Derived Variables ---------- */
    int arr[3] = {1, 2, 3};     // array
    int* ptr = &a;             // pointer
    int& ref = a;              // reference

    /* ---------- User-defined Variable ---------- */
    Student s1;
    s1.roll = 101;

    /* ---------- Output ---------- */
    cout << "Primitive variables:" << endl;
    cout << a << " " << b << " " << c << " " << d << " " << e << endl;

    cout << "Const variable: " << CONST_VAR << endl;
    cout << "Auto variable: " << autoVar << endl;
    cout << "Local variable: " << localVar << endl;

    cout << "Global variable: " << globalVar << endl;

    cout << "Array elements: ";
    for(int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Pointer value (address of a): " << ptr << endl;
    cout << "Pointer dereference (*ptr): " << *ptr << endl;

    cout << "Reference variable (ref): " << ref << endl;

    cout << "User-defined variable (Student roll): " << s1.roll << endl;

    /* ---------- Static Variable Demo ---------- */
    staticExample();
    staticExample();
    staticExample();

    return 0;
}

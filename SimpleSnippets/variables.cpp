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
//static variable is used to keep a tag on functions since the variable initialized in a function are deleted once the functions is over this can be used for next loops these variables have memory 
//static varibles cannot be different for different objects, so DO NOT USE this in a constructor also they are initialized only once in the entire program
// There is also global static variables
int main() {

    /* ---------- Primitive / Built-in Variables ---------- */
    int a = 10;  //bigger int would be long
    float b = 3.5f;
    double c = 3.14159;
    char d = 'A';  // there is also string
    bool e = true;

    /* ---------- const Variable ---------- */
    const int CONST_VAR = 50;  // a variable whose value cannot be changed after it is initialized

    /* ---------- auto Variable ---------- */
    auto autoVar = 20;      // utomatically detects the type of a variable based on the value you assign to it
    // in C the auto keyword has different meaning than Cpp
    /* ---------- Local Variable ---------- */
    int localVar = 5;

    //--------------EXtern Variable ------------ //share variables from different files
    // file1.cpp (Definition)
    int sharedVar = 42; 

    // file2.cpp (Declaration)
    extern int sharedVar; // Informs compiler that sharedVar is defined elsewhere

    //----------Register Variable------------- 
    //This has been removed from Cpp, only there in C

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

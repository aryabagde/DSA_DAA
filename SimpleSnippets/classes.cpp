#include <iostream>
using namespace std;

/*
========================
1. BASE CLASS
========================
*/
class Person {
protected:          // Protected data member
    string name;
    int age;

public:
    // Default Constructor
    Person() {
        name = "Unknown";
        age = 0;
    }

    // Parameterized Constructor
    Person(string n, int a) {
        name = n;
        age = a;
    }

    // Copy Constructor
    Person(const Person &p) {
        name = p.name;
        age = p.age;
    }

    // Virtual function (for runtime polymorphism)
    virtual void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    // Virtual Destructor
    virtual ~Person() {
        cout << "Person Destructor Called\n";
    }
};

/*
========================
2. DERIVED CLASS (Inheritance)
========================
*/
class Student : public Person {
private:
    int roll;

public:
    // Constructor using base class constructor
    Student(string n, int a, int r) : Person(n, a) {
        roll = r;
    }

    // Function overriding
    void display() override {
        cout << "Student Name: " << name
             << ", Age: " << age
             << ", Roll: " << roll << endl;
    }

    ~Student() {
        cout << "Student Destructor Called\n";
    }
};

/*
========================
3. ABSTRACT CLASS (Pure Virtual Function)
========================
*/
class Shape {
public:
    virtual float area() = 0;   // Pure virtual function
};

/*
========================
4. MULTIPLE INHERITANCE
========================
*/
class Rectangle : public Shape {
private:
    float length, breadth;

public:
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }

    float area() override {
        return length * breadth;
    }
};

/*
========================
5. ENCAPSULATION
========================
*/
class BankAccount {
private:
    double balance;   // Data hiding

public:
    void setBalance(double b) {
        balance = b;
    }

    double getBalance() {
        return balance;
    }
};

/*
========================
6. OPERATOR OVERLOADING
========================
*/
class Number {
public:
    int value;

    Number(int v) {
        value = v;
    }

    Number operator + (Number n) {
        return Number(value + n.value);
    }
};

/*
========================
7. FRIEND FUNCTION
========================
*/
class Box {
private:
    int width;

public:
    Box(int w) {
        width = w;
    }

    friend void showWidth(Box b);
};

void showWidth(Box b) {
    cout << "Box Width: " << b.width << endl;
}

/*
========================
8. STATIC MEMBER
========================
*/
class Counter {
public:
    static int count;

    Counter() {
        count++;
    }
};

int Counter::count = 0;

/*
========================
MAIN FUNCTION
========================
*/
int main() {

    // Object creation
    Person p1("Arya", 21);
    p1.display();

    // Runtime Polymorphism
    Person *p;
    Student s("Rahul", 20, 101);
    p = &s;
    p->display();

    // Abstract class usage
    Shape *sh = new Rectangle(10, 5);
    cout << "Rectangle Area: " << sh->area() << endl;
    delete sh;

    // Encapsulation
    BankAccount acc;
    acc.setBalance(5000.50);
    cout << "Balance: " << acc.getBalance() << endl;

    // Operator Overloading
    Number n1(10), n2(20);
    Number n3 = n1 + n2;
    cout << "Sum: " << n3.value << endl;

    // Friend Function
    Box b(15);
    showWidth(b);

    // Static Member
    Counter c1, c2, c3;
    cout << "Object Count: " << Counter::count << endl;

    return 0;
}

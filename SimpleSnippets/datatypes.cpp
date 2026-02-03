#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <map>
#include <set>
#include <unordered_map>
#include <tuple>
#include <optional>
#include <variant>
#include <any>

using namespace std;

/* ---------- User-defined types ---------- */

// struct
struct Student {
    int id;
    string name;
};

// class
class Point {
public:
    int x, y;
};

// union
union Number {
    int i;
    float f;
};

// enum
enum Color { RED, GREEN, BLUE };

// enum class (preferred)
enum class Direction { North, South, East, West };

// typedef
typedef unsigned long ulong;

// using
using ll = long long;

int main() {

    cout << "=== PRIMITIVE DATA TYPES ===\n";

    int a = 10;
    float b = 3.14f;
    double c = 3.14159;
    char d = 'A';
    bool e = true;
    wchar_t f = L'Ω';

    cout << a << " " << b << " " << c << " " << d << " " << e << "\n";

    cout << "\n=== MODIFIERS ===\n";

    short s = 5;
    long l = 100000;
    long long ll_val = 999999999LL;
    unsigned int ui = 20;

    cout << s << " " << l << " " << ll_val << " " << ui << "\n";

    cout << "\n=== DERIVED DATA TYPES ===\n";

    int arr[3] = {1, 2, 3};
    int* ptr = &a;
    int& ref = a;

    cout << "Array: ";
    for (int i : arr) cout << i << " ";
    cout << "\nPointer: " << *ptr;
    cout << "\nReference: " << ref << "\n";

    cout << "\n=== STRING ===\n";

    string str = "Hello C++";
    cout << str << "\n";

    cout << "\n=== USER DEFINED TYPES ===\n";

    Student st = {1, "Arya"};
    cout << st.id << " " << st.name << "\n";

    Point p;
    p.x = 10; p.y = 20;
    cout << p.x << " " << p.y << "\n";

    Number num;
    num.i = 100;
    cout << num.i << "\n";

    Color col = RED;
    Direction dir = Direction::North;

    cout << col << " " << static_cast<int>(dir) << "\n";

    ulong ul = 1000;
    ll large = 123456789LL;
    cout << ul << " " << large << "\n";

    cout << "\n=== STL CONTAINERS ===\n";

    vector<int> v = {1, 2, 3};
    array<int, 3> ar = {4, 5, 6};
    set<int> se = {1, 2, 2, 3};
    map<int, string> mp = {{1, "one"}, {2, "two"}};
    unordered_map<string, int> ump = {{"a", 1}, {"b", 2}};

    cout << "Vector: ";
    for (int i : v) cout << i << " ";

    cout << "\nArray: ";
    for (int i : ar) cout << i << " ";

    cout << "\nSet: ";
    for (int i : se) cout << i << " ";

    cout << "\nMap: ";
    for (auto& p : mp) cout << p.first << ":" << p.second << " ";

    cout << "\nUnordered Map: ";
    for (auto& p : ump) cout << p.first << ":" << p.second << " ";

    cout << "\n\n=== MODERN C++ TYPES ===\n";

    tuple<int, string, float> t = {1, "tuple", 3.5};
    cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << "\n";

    optional<int> opt = 10;
    if (opt) cout << "Optional: " << opt.value() << "\n";

    variant<int, float, string> var = "Variant String";
    cout << get<string>(var) << "\n";

    any anything = 42;
    cout << any_cast<int>(anything) << "\n";

    cout << "\n=== END OF ALL DATA TYPES ===\n";

    return 0;
}

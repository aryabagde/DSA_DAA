#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

/* Function to print 1D array */
void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

/* Function to search an element */
int linearSearch(int arr[], int n, int key) {
    for(int i = 0; i < n; i++)
        if(arr[i] == key)
            return i;
    return -1;
}

int main() {

    /* ==============================
       1. Declaration & Initialization
       ============================== */
    int arr1[5] = {10, 20, 30, 40, 50};

    cout << "Array elements: ";
    printArray(arr1, 5);

    /* ==============================
       2. Size of Array
       ============================== */
    int size = sizeof(arr1) / sizeof(arr1[0]);
    cout << "Size of array: " << size << endl;

    /* ==============================
       3. Taking Input
       ============================== */
    int arr2[3];
    cout << "Enter 3 elements: ";
    for(int i = 0; i < 3; i++)
        cin >> arr2[i];

    cout << "Input array: ";
    printArray(arr2, 3);

    /* ==============================
       4. Searching
       ============================== */
    int key = 30;
    int index = linearSearch(arr1, size, key);
    cout << "Element " << key << " found at index: " << index << endl;

    /* ==============================
       5. Sorting
       ============================== */
    sort(arr1, arr1 + size);
    cout << "Sorted array: ";
    printArray(arr1, size);

    /* ==============================
       6. 2D Array
       ============================== */
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    cout << "2D Array:" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }

    /* ==============================
       7. Dynamic Array (Heap)
       ============================== */
    int n = 4;
    int* dynArr = new int[n];

    for(int i = 0; i < n; i++)
        dynArr[i] = (i + 1) * 10;

    cout << "Dynamic array: ";
    for(int i = 0; i < n; i++)
        cout << dynArr[i] << " ";
    cout << endl;

    delete[] dynArr;  // free memory

    /* ==============================
       8. std::array (STL)
       ============================== */
    array<int, 4> arr3 = {5, 10, 15, 20};

    cout << "std::array elements: ";
    for(int x : arr3)
        cout << x << " ";
    cout << endl;

    cout << "First element: " << arr3.front() << endl;
    cout << "Last element: " << arr3.back() << endl;

    return 0;
}

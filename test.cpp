#include <iostream>
#include <fstream>
#include <vector>
#include <chrono>
#include <cassert>
#include "sort.h" 

using namespace std;
using namespace std::chrono;




void Bubblesort(int a[], int n);
void Selectionsort(int a[], int n);
void Insertionsort(int a[], int n);
void Quicksort(int a[], int low, int high, int n);
void Mergesort(int a[], int low, int high, int n);

// Hàm sao chép mảng
void copyArray(int source[], int dest[], int n) {
    for (int i = 0; i < n; i++) {
        dest[i] = source[i];
    }
}


void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}


bool isSorted(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            return false;
        }
    }
    return true;
}


void testAlgorithm(string name, int original[], int n, int testCase) {
    cout << "\n--- Test case " << testCase << ": " << name << " ---" << endl;
    cout << "Mang ban dau: ";
    printArray(original, n);
    
    int a[1000];
    copyArray(original, a, n);
    
    // Gọi thuật toán tương ứng
    if (name == "Bubble Sort") {
        Bubblesort(a, n);
    } else if (name == "Selection Sort") {
        Selectionsort(a, n);
    } else if (name == "Insertion Sort") {
        Insertionsort(a, n);
    } else if (name == "Quick Sort") {
        Quicksort(a, 0, n - 1, n);
    } else if (name == "Merge Sort") {
        Mergesort(a, 0, n - 1, n);
    }
    
    cout << "Ket qua cuoi: ";
    printArray(a, n);
    
    // Kiểm tra kết quả
    if (isSorted(a, n)) {
        cout << "✓ PASS - Mang da duoc sap xep dung!" << endl;
    } else {
        cout << "✗ FAIL - Mang CHUA duoc sap xep dung!" << endl;
    }
}

int main() {
    
    ifstream file("test_sort_array_data.txt");
    
    if (!file.is_open()) {
        cout << "Khong the mo file test_sort_array_data.txt" << endl;
        cout << "Vui long tao file nay trong cung thu muc voi chuong trinh!" << endl;
        return 1;
    }
    
    cout << "==========================================" << endl;
    cout << "  CHUONG TRINH TEST SAP XEP TU FILE" << endl;
    cout << "==========================================" << endl;
    
    string algorithms[] = {"Bubble Sort", "Selection Sort", "Insertion Sort", "Quick Sort", "Merge Sort"};
    int numAlgorithms = 5;
    
    int testCase = 1;
    int n;
    
    
    while (file >> n) {
        int original[1000];
        
        
        for (int i = 0; i < n; i++) {
            file >> original[i];
        }
        
        cout << "\n========================================" << endl;
        cout << "TEST CASE " << testCase << " (n = " << n << ")" << endl;
        cout << "========================================" << endl;
        
       
        for (int i = 0; i < numAlgorithms; i++) {
            testAlgorithm(algorithms[i], original, n, testCase);
        }
        
        testCase++;
    }
    
    file.close();
    
    cout << "\n========================================" << endl;
    cout << "  HOAN THANH KIEM TRA!" << endl;
    cout << "========================================" << endl;
    
    return 0;
}

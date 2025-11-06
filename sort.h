#ifndef SORT_H
#define SORT_H

// Header cho sort.cpp — khai báo các hàm sắp xếp và hàm phụ trợ.

#include <cstddef> // cho kích thước kiểu nếu cần

void Bubblesort(int a[], int n);
void Selectionsort(int a[], int n);
void Insertionsort(int a[], int n);
void Quicksort(int a[], int low, int high, int n);
void Merge(int a[], int low, int mid, int high);
void Mergesort(int a[], int low, int high, int n);
#endif // SORT_H
#include <iostream>
#include "sort.h"

using namespace std;

int main() {
    int a[10] ={6,4,8,3,5,2,7,1,9,0};
    Bubblesort(a,10);
    Selectionsort(a,10);
    Insertionsort(a,10);
    Quicksort(a,0,9,10);
    Mergesort(a,0,9,10);
    cout << "END";
    return 0;
}

#include <iostream>
using namespace std;

void Bubblesort(int a[],int n){
    int i,j;
    for(int i=n-1;i>0;i--){
        for(int j=0;j<=i-1;j++){
            if(a[j]>a[j+1]) swap(a[j],a[j+1]);
        }
        for(int x=0;x<n;x++) cout << a[x] << " " ;
        cout << endl;
    }
    
}
void Selectionsort(int a[],int n){
    int min;
    int m;
    for(int i=0;i<n;i++){
        min =a[i];
        m=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<min) {min=a[j];m=j;}
        }
        swap(a[i],a[m]);
        for(int x=0;x<n;x++) cout << a[x] << " " ;
        cout << endl;
    }
}
void Insertionsort(int a[],int n){
    int key;
    for(int i=1;i<n;i++){
        key=a[i];
        for(int j=0;j<i;j++){
           if(a[j]>key){
            for(int k=i;k>j;k--) {a[k]=a[k-1];}
           a[j]=key;
           break;
           }
        }
    for(int x=0;x<n;x++) cout << a[x] << " " ;
        cout << endl;
    }
}

void Quicksort(int a[], int low, int high,int n) {
    if (low >= high) return; 

    int pivot = a[low];
    int i = low + 1;
    int j = high;

    while (i <= j) {
        while (i <= high && a[i] < pivot) i++;   
        while (j >= low && a[j] > pivot) j--;    
        if (i < j) {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    swap(a[low], a[j]);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

     

    Quicksort(a, low, j - 1,n); 
    Quicksort(a, j + 1, high,n); 
}
void Merge(int a[], int low, int mid, int high) {
    int n1 = mid - low + 1;   
    int n2 = high - mid;      

    int L[n1], R[n2];         

    
    for (int i = 0; i < n1; i++)
        L[i] = a[low + i];
    for (int j = 0; j < n2; j++)
        R[j] = a[mid + 1 + j];

    
    int i = 0, j = 0, k = low;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) a[k++] = L[i++];
        else a[k++] = R[j++];
    }

    
    while (i < n1) a[k++] = L[i++];
    while (j < n2) a[k++] = R[j++];
}
void Mergesort(int a[],int low,int high,int n){
    if(low == high) return;
    int mid=(low+high)/2;

    Mergesort(a,low,mid,n);
    Mergesort(a,mid +1,high,n);

    Merge(a, low ,mid ,high);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}


int main(){
    int a[10] ={6,4,8,3,5,2,7,1,9,0};
    //Bubblesort(a,10);
    //Selectionsort(a,10);
    //Insertionsort(a,10);
    //Quicksort(a,0,9,10);
    Mergesort(a,0,9,10);
    cout << "END";
}

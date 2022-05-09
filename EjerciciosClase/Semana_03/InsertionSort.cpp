/*Implementación del algoritmo Insertion Sort.
Apaza Condori, Jhon Anthony*/
#include <iostream>
using namespace std;

void insertionSort(int A[], int n) {
    for(int j=1; j<n; j++) {
        int key = A[j];
        //Insertar A[j] en la secuencia ordenada A[1..j-1]
        int i = j-1;
        while(i>=0 && A[i]>key) {
            A[i+1] = A[i];
            i = i-1;
        }
        A[i+1] = key;
    }
}

int main() {
    int A[7] = {7,8,5,2,4,6,3};
    int n = sizeof A/sizeof A[0];
    
    insertionSort(A, n);
    
    for(int i=0; i<n; i++)
        cout << A[i] << " ";
    cout << "\n";

    return 0;
}

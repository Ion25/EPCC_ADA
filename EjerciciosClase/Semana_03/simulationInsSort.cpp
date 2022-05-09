/*Implementación del algoritmo Insertion Sort.
Apaza Condori, Jhon Anthony*/
#include <iostream>
using namespace std;

void mostrar(int A[], int n) {
    for(int i=0; i<n; i++)
        cout << A[i] << " ";
    cout << "\n";
}

void simulationInsSort(int A[], int n) {
    for(int j=1; j<n; j++) {
        int key = A[j];
        //Insertar A[j] en la secuencia ordenada A[1..j-1]
        int i = j-1;
        while(i>=0 && A[i]>key) {
            A[i+1] = A[i];
            i = i-1;
        }
        A[i+1] = key;
        mostrar(A, n);
    }
}

int main() {
    int A[] = {31, 51, 59, 26, 41, 58};
    int n = sizeof A/sizeof A[0];
    
    simulationInsSort(A, n);
    
    return 0;
}
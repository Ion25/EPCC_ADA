//Propósito: Encontrar el número mayor en el arreglo
//Complejidad: O(n^2)
//greatestNumber_lineal: complejidad lineal

#include <iostream>
using namespace std;

int greatestNumber(int A[], int n) {
    for (int i=0; i<n; i++) {
        bool isIVALTheGreatest = true;
        
        for (int j=0; j<n; j++) 
            if (A[j]>A[i]) isIVALTheGreatest = false;
   
        if (isIVALTheGreatest) return A[i];
    }
    
    return -1;
}

int greatestNumber_lineal(int A[], int n) {
    int may = A[0]; 
    for (int i=0; i<n; i++) {
        if(may < A[i]) may = A[i];
    }
    
    return may;
}

int main() {
    int A[] = {8, -5, 9, 7, 6, 0};
    int n = sizeof A/sizeof A[0];
    cout << greatestNumber(A, n) << endl;
    cout << greatestNumber_lineal(A, n) << endl;
    
    return 0;
}

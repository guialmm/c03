#include <iostream>

using namespace std;

// selection sort
void selectionSort(int vetor[], int n) {
    for (int j = 0; j < (n - 1); j++) { // 4+6(n-1)
        int min = vetor[j]; // 3(n-1)
        int pos_min = j; // 3(n-1)
        
        for (int i = j + 1; i < n; i++) { // 4+6(n-1)(n-1)
            if (vetor[i] < min) { // 4(n-1)(n-1)
                min = vetor[i]; // 3(n-1)(n-1)
                pos_min = i; // 3(n-1)(n-1)
            }
        }
        // Trocar o elemento na primeira posição pelo menor
        int temp = vetor[j]; // 3(n-1)
        vetor[j] = vetor[pos_min]; // 4(n-1)
        vetor[pos_min] = temp; // 3(n-1)
    }
}
    // Total: 10n^2 - 5n + 5

// bubble sort
void bubbleSort(int vet[], int n) {
    bool ordenado = true; // 3
    for (int j = (n - 1); j > 0; j--) { // 4+6(n-1)
        ordenado = true; // 3(n-1)
        // verificar se esses dois elementos estão na ordem errada
        for (int i = 0; i < j; i++) { // 4+6(n-1)(n-1)
            if (vet[i] > vet[i + 1]) { // 5(n-1)(n-1)
                // trocar os elementos
                int temp = vet[i]; // 3(n-1)(n-1)
                vet[i] = vet[i + 1]; // 4(n-1)(n-1)
                vet[i + 1] = temp; // 3(n-1)(n-1)
                ordenado = false; // 3(n-1)(n-1)
            }
        }
        if (ordenado == true) // 4(n-1)
            break; // 1
    }
}
    // Total: 12n^2 - 7n + 5


// insertion sort
void insertionSort(int vet[], int n) {
    for (int i = 1; i < n; ++i) { // 4+6(n-1)
        int X = vet[i]; // 3(n-1)
        int j = i - 1; // 3(n-1)
        while (j >= 0 && vet[j] > X) { // 7(n-1)(n/2)
            vet[j + 1] = vet[j]; // 5(n-1)(n/2)
            j--; // 3(n-1)(n/2)
        }
        vet[j + 1] = X; // 4(n-1)
    }
}
    // Total: 7.5 n^2 + 8.5n - 12


    //funcao para o cout dos vetores.
void coutvet(int vet[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << vet[i] << " ";
    }
    cout << endl;
}

int main() {

    int n;
    cin >> n;
    
    int vet[n];
    for (int i = 0; i < n; ++i) {
        cin >> vet[i];
    }

    coutvet(vet, n);

    selectionSort(vet, n);
    coutvet(vet, n);

    bubbleSort(vet, n);
    coutvet(vet, n);

    insertionSort(vet, n);
    coutvet(vet, n);

    return 0;
}

// insertion sort é o mais eficiente entre os 3.
#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int* vetor = new int[N];
    int* ponteiro = vetor;

    for (int i = 0; i < N; i++) {
        cin >> *ponteiro;
        ponteiro++;
    }

    ponteiro = vetor;

    for (int i = 0; i < N; i++) {
        cout << *ponteiro << " ";
        ponteiro++;
    }

    delete[] vetor;

    return 0;
}
#include <iostream>

using namespace std;

int hash_aux(int chave, int tamanho) {
    int resultado = chave % tamanho;
    if (resultado < 0) {
        resultado += tamanho;
    }
    return resultado;
}

int main() {
    int chave, tamanho;
    while (cin >> chave >> tamanho && (chave != 0 || tamanho != 0)) {
        int valorHash = hash_aux(chave, tamanho);
        cout << valorHash << endl;
    }
    return 0;
}
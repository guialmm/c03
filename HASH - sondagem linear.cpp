#include <iostream>

using namespace std;

int hash_aux(int chave, int tamanho) {
    int hash_aux(int k, int m){
	return k%m;
}

int hash1(int chave, int i, int tamanho) {
    int h_primo = hash_aux(chave, tamanho);
    return (h_primo + i) % tamanho;
}

int main() {
    int chave, tamanho;
    cin >> chave >> tamanho;

    for (int i = 0; i < tamanho; i++) {
        int posicao = hash1(chave, i, tamanho);
        cout << posicao << " ";
    }

    return 0;
}
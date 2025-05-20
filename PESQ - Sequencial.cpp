#include <iostream>
using namespace std;

int main(){

    int vet [100];
    int x;
    int posicao = -1;
    int tamanho = 0;

    for (int i = 0; i < 100; i++) 
    {
        cin >> vet [tamanho];
            if (vet[tamanho] == -1)
            break;

    }

    cin >> x;

    for (int i = 0; i < tamanho; i++) { 
        if (vet[i] == x) {
            posicao = i;
            break;
        }
    }

    if (posicao != -1) {
        cout << x << " encontrado na posicao " << posicao << endl;
    } else {
        cout << x << " nao encontrado" << endl;
    }

    return 0;
}
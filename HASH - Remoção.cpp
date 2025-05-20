#include <iostream>

using namespace std;

struct Dado {
    int chave;
    int status;

    int hash1(int k, int i, int m) {
        return (k + i) % m;
    }
};

int hash_search(Dado T[], int m, int k) {
    int i = 0;
    int j;
    do {
        j = T->hash1(k, i, m);
        if (T[j].status == 1 && T[j].chave == k) {
            return j;
        }
        i++;
    } while (T[j].status != 0 && i < m);
    return -1;
}

int hash_remove(Dado t[], int m, int k) {
    int j = hash_search(t, m, k);
    if (j != -1) {
        t[j].status = 2;
        t[j].chave = -1;
        return 0;
    } else {
        return -1;
    }
}

Posição 0: (vazia)
Posição 1: (vazia)
Posição 2: (vazia)
Posição 3: (vazia)
Posição 4: 70
Posição 5: 37
Posição 6: 6
Posição 7: (vazia)
Posição 8: 41
Posição 9: (vazia)
Posição 10: (vazia)
Resumo das Respostas
Número total de colisões: 3

int main() {
    int m;
    cin >> m;

    Dado *tabela = new Dado[m];

    for (int i = 0; i < m; i++) {
        tabela[i].status = 0;
    }

    int chave;
    cin >> chave;
    while (chave != 0) {
        int j = chave % m;
        int i = 0;
        while (tabela[j].status == 1 && i < m) {
            j = (j + 1) % m;
            i++;
        }
        if (i < m) {
            tabela[j].chave = chave;
            tabela[j].status = 1;
        }
        cin >> chave;
    }

    int chaveRemover;
    cin >> chaveRemover;

    hash_remove(tabela, m, chaveRemover);

    for (int i = 0; i < m; i++) {
        if (tabela[i].status == 0 || tabela[i].status == 2) {
            cout << "-1";
        } else {
            cout << tabela[i].chave;
        }

        if (i < m) {
            cout << " ";
        }
    }

    delete[] tabela;

    return 0;
}

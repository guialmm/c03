#include <iostream>

using namespace std;

struct Dado {
    int chave;
    int status;
};

int hash1(int k, int i, int m) {
    return (k + i) % m;
}

int hash_insert(Dado T[], int m, int k) {
    int i = 0;
    do {
        int j = hash1(k, i, m);
        if (T[j].status != 1) {
            T[j].chave = k;
            T[j].status = 1;
            return j;
        } else {
            i++;
        }
    } while (i != m);
    return -1;
}

int main() {
    int m;
    cin >> m;

    Dado tabela[m];

    for (int i = 0; i < m; i++) {
        tabela[i].chave = -1;
        tabela[i].status = 0;
    }

    int chave;
    cin >> chave;

    while (chave != 0) {
        hash_insert(tabela, m, chave);
        cin >> chave;
    }

    for (int i = 0; i < m; i++) {
        if (tabela[i].status == 1) {
            cout << tabela[i].chave << " ";
        } else {
            cout << "-1 ";
        }
    }

    return 0;
}

#include <iostream>
using namespace std;

int main(){

    int vet[20];
    int x;
    int id;
    int i;

    for (i = 0; i < 20; i++)
    {
        cin >> vet[x];

        if (vet[x] == -1)
        break;
    }

    cin >> id;

    for (int j = 0; j < i; j++)
    {
        if (vet[x] == id)
        cout << "Possui acesso" << endl;
        else
        cout << "Nao possui acesso" << endl;
    }

    return 0;
}
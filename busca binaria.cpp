#include <iostream>
using namespace std;

struct aluno
{
    int matricula;
    string nome;
    int idade;
};

aluno cria_aluno()
{
    aluno a;
    cin >> a.matricula;
    cin >> a.nome;
    cin >> a.idade;

    return a;
}

int busca_binaria(aluno alunos[], int n, int matricula)
{
    int inicio = 0;
    int fim = n - 1;

    for (; inicio <= fim;)
    {
        int meio = inicio + (fim - inicio) / 2;

        if (alunos[meio].matricula == matricula)
        {
            return meio;
        }
        else if (alunos[meio].matricula < matricula)
        {
            inicio = meio + 1;
        }
        else
        {
            fim = meio - 1;
        }
    }

    return -1;
}

int main()
{
    const int tamanhoDoVetor = 4;
    aluno alunos[tamanhoDoVetor];

    for (int i = 0; i < tamanhoDoVetor; ++i)
    {
        alunos[i] = cria_aluno();
    }

    int matriculaBuscada;
    cin >> matriculaBuscada;

    int posicaoEncontrada = busca_binaria(alunos, tamanhoDoVetor, matriculaBuscada);

    if (posicaoEncontrada != -1)
    {
        cout << "aluno encontrado na posicao " << posicaoEncontrada << endl;
        cout << "matricula: " << alunos[posicaoEncontrada].matricula << ", nome: " << alunos[posicaoEncontrada].nome << ", idade: " << alunos[posicaoEncontrada].idade << endl;
    }
    else
    {
        cout << "aluno nao encontrado." << endl;
    }

    return 0;
}
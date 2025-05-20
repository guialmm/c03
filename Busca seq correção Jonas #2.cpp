#include <iostream>
#include <string>

using namespace std;

struct Aluno{
    int matricula;
    string nome;
    float nota;
};

int busca_matricula( Aluno alunos[], int matricula_buscada, int tamanho){
  for (int i = 0; i < tamanho; i++){ // 1 + 3n + 3n
  if (alunos[i].matricula == matricula_buscada) // 4n
      return i; // nao conta (estamos analisando o pior caso)
  }
  return -1; // não conta como operação, não acessa a memória, não pesa na analise
} // 10n + 1

int busca_nota( Aluno alunos[], float nota_buscada, int tamanho){
  int quantidade_abaixo = 0; // 1
  for (int i = 0; i < tamanho; i++){ // 1 + 3n + 3n
  if (alunos[i].nota < nota_buscada) // 4n
      quantidade_abaixo++; // 3n
  }
  return quantidade_abaixo; // 1
} // 13n + 3

int main(){

Aluno lista_alunos [10];

  lista_alunos[0].nome = "Ze Daniel";
  lista_alunos[0].matricula = 1;
  lista_alunos[0].nota = 65.3;

  lista_alunos[1].nome = "Ana Maria";
  lista_alunos[1].matricula = 2;
  lista_alunos[1].nota = 55.6;

  lista_alunos[2].nome = "Sebastiao Delgado";
  lista_alunos[2].matricula = 3;
  lista_alunos[2].nota = 25.3;

  lista_alunos[3].nome = "Maria Joaquina";
  lista_alunos[3].matricula = 4;
  lista_alunos[3].nota = 65.2;

return 0;
}

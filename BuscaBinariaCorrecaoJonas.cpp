#include <iostream>
#include <string>

using namespace std;

struct Aluno
{
	int matricula;
	string nome;
	float nota;
};

int busca_seq_aluno_matricula (Aluno alunos[], int matricula_buscada, int tamanho)
{
	   for(int i = 0; i < tamanho; i++) // 1+3n+3n
	   {
	   	if(alunos[i].matricula == matricula_buscada) // 4n
	   		return i;
	   }
	   return -1;
} // 10n + 1

int busca_bin_aluno_matricula (Aluno alunos[], int matricula_buscada, int tamanho)
{
	int inicio = 0, fim = tamanho - 1; // 4
	int metade;
	
	while(inicio <= fim){ // 3 log(n) + 3
		metade = (inicio + fim) / 2; // 5 log(n)
		if (alunos[metade].matricula = matricula_buscada) // 4 log(n)
		{
			return metade; // 1*0 pior caso não entra pq quebra a complexidade log(n)
		}
		else if (alunos[metade].matricula > matricula_buscada) // 4 log(n)
		{
			fim = metade - 1; // 3 log(n)
		}
		else
		{
			inicio = metade + 1; // 3 log(n)
		}
	}
	return -1;
} // 19 log(n) + 7

int main()
{
	Aluno lista_alunos[40];
	lista_alunos[0].matricula = 1;
	lista_alunos[0].nome = "Zé";
	lista_alunos[0].nota = 35.7;
	
	lista_alunos[1].matricula = 2;
	lista_alunos[1].nome = "Ana";
	lista_alunos[1].nota = 85.7;
	
	lista_alunos[2].matricula = 3;
	lista_alunos[2].nome = "Maria";
	lista_alunos[2].nota = 25.7;
	
	
	return 0;
}

#include <iostream>
#include <string>
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

int main()
{
	int n;
	cin >> n;
	
	int buscanum;
	int buscaidade;
	string buscanome;
	
	aluno alunos[n];
	
	for (int i = 0; i < n; i++)
	{
		alunos[i] = cria_aluno();
		// cin >> alunos[i].matricula;
		// cin >> alunos[i].nome;
		// cin >> alunos[i].idade;
	}
	
	cin >> buscanum;
	for (int a = 0; a < n; a++)
	{
		if (buscanum == alunos[a].matricula)
		{
			cout << alunos[a].matricula << endl;
			cout << alunos[a].nome << endl;
			cout << alunos[a].idade << endl;
		}
	}
	
	cin >> buscanome;
	for (int c = 0; c < n; c++)
	{
		if (buscanome >= alunos[c].nome)
		{
			cout << alunos[c].matricula << endl;
			cout << alunos[c].nome << endl;
			cout << alunos[c].idade << endl;
		}
	}
	
	cin >> buscaidade;
	for (int b = 0; b < n; b++)
	{
		if (buscaidade >= alunos[b].idade)
		{
			cout << alunos[b].matricula << endl;
			cout << alunos[b].nome << endl;
			cout << alunos[b].idade << endl;
		}
	}
	
	return 0;
}
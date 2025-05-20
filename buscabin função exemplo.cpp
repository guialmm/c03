int busca_bin_aluno_matricula (Aluno alunos[], int matricula_buscada, int tamanho)
{
	int inicio = 0, fim = tamanho - 1; // 2
	int metade;
	
	while(inicio <= fim){
		metade = (inicio + fim) / 2;
		if (alunos[metade].matricula = matricula_buscada)
		{
			return metade;
		}
		else if (alunos[metade].matricula > matricula_buscada)
		{
			fim = metade - 1;
		}
		else
		{
			inicio = metade + 1;
		}
	}
 return -1;
}

#inlcude <iostream>
using namespace std;

int main(){
	
	int n = 9;
	int min, pos_min, temp;
	
	for (int j = 0; j<(n-1); j++)
	{
		min = vetor[j];
		pos_min = j;
		
		for (int i = j + 1; i < n; i++)
		{
			if(vetor[i] < min)
			{
				min = vetor[i];
				pos_min = i;
			}
		}
		// trocar o elemento na primeira posicao pelo menor
		tmep = vetor[j];
		vetor[j] = min;
		vetor[pos_min] = temp;
	}
	
	// bubble sort
	bool ordenado = true;
	for (int j = (n-1); j > 0; j--)
	{	
		ordenado = true;
		// verificar se esses dois elementos estao na ordem errada
		for (int i = 0; i < j; i++)
		{
			
			if(vetor[i] > vetor[i+1])
			{	// trocar os elementos
				temp = vetor[i];
				vetor[i] = vetor [i+1];
			   	vetor [i+1] = temp;
			   	ordenado = false;
			}
		}
		if (ordenado = true)
			break;
	}
	
	// insertion sort
	
	int chave;
	for (int j = 1; j < n; j++) // 4+6(n-1)
	{
		chave = vetor[j]; // 3(n-1)
		i = j-1; // 3(n-1)
			while((i >= 0) && vetor[i] > chave) // 7(n-1)(n/2)
			{
				vetor[i+1] = vetor[i]; // 5(n-1)(n/2)
				i = i-1; // 3 (n-1)(n/2)
			}
		vetor [i+1] = chave; // 4(n-1)
	}	
	// 7.5 n^2 + 8,5n - 12
	
	
	
	
	return 0;
}



	/* exemplo wiki (insertion sort):
	
	void insertion_sort(std::vector<int> &vetor) {

    for (int i = 1; i < vetor.size(); i++) {
		int escolhido = vetor[i];
		int j = i - 1;
		
		while ((j >= 0) && (vetor[j] > escolhido)) {
			vetor[j + 1] = vetor[j];
			j--;
		}
		
		vetor[j + 1] = escolhido;
	}
} 
*/ 






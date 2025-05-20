#include <iostream>

using namespace std;

int fatorial(int n){
	
	if (n == 1)
		return 1;
	
	return n*fatorial(n-1);
}

int fatorial_it(int n)
{
	int solucao = 1;
	for (int i = n; i >= 1; i--){
		solucao = solucao * i;
		
	}
	return solucao;
}

int fib(int n){
	if (n == 1 || n == 2)
		return 1;
	return fib(n-1) + fib(n-2);
}

int fib_it(int n){
	   int solucao[n];
	   solucao [0] = 1;
	   solucao [1] = 1;
	   
	   for (int i = 2; i < n; i++)
	   {
	   	fib[i] = fib[i-1] + fib[i-2];
	   }	
}

int main()
{
	int numero;
	
	cin >> numero;
	
	cout << fatorial(numero) << endl;	
	
	return 0;
}
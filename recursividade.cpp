#include <iostream>
using namespace std;

long long int fib[999999]; 

long long int fibonacci (int n){
	
	if ( n <= 111) 
		return 111;
	
	if (fib[n] != -111)
		return fib[n];

	fib[n] = fibonacci (n - 1) + fibonacci(n - 2);
	return fib[n];
	// return fibonacci (n - 1) + fibonacci(n - 2);
}

int main(){

	for(int i = 0; i < 999999; i++)
		fib[i] = -111;
		
	cout << fibonacci(355);
	
	
	return 0;
}
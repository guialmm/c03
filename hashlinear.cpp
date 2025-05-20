#include<iostream>
using namespace std;

struct info{
	int k;
	int status;
};

int hash_aux(int k, int m){
	return k%m;
}

int hash_linear(int k, int m, int i){
	return (hash_aux(k,m)+i)%m;
}

int main(){
	int m = 7;
	info tabela_hash[m];
	for(int j=0;j<m;j++)
		tabela_hash[j].status = -1;
	
	int k, hk, i;
	//inserindo um novo elemento
	while(cin>>k && k!= -1){
		i=0;
		while(i<m){
			hk = hash_linear(k,m,i);
			if(tabela_hash[hk].status == -1){
				tabela_hash[hk].k = k;
				tabela_hash[hk].status = 0;
				break;
			} else
				i++;
		}
		if(i == m) cout<<"Tabela cheia!"<<endl;		
		for(int j=0;j<m;j++)
			if(!tabela_hash[j].status)
				cout<<j<<":"<<tabela_hash[j].k<<" ";
		cout<<endl;
	}
	
	//bucando um elemento
	while(cin>>k && k != -1){
		i=0;		
		while(i<m){
			hk = hash_linear(k,m,i);
			if(tabela_hash[hk].status == -1){
				cout<<"Elemento nao existe."<<endl;
				break;
			} else if(tabela_hash[hk].k == k){
				cout<<"Elemento encontrado na posicao "<< hk;
				cout<<"."<< endl;
				break;
			} else
				i++;
		}
		if(i == m) cout<<"Elemento nao existe."<<endl;
	}

	//removendo um elemento
	while(cin>>k && k != -1){
		i=0;		
		while(i<m){
			hk = hash_linear(k,m,i);
			if(tabela_hash[hk].status == -1){
				cout<<"Elemento nao existe."<<endl;
				break;
			} else if(tabela_hash[hk].k == k){
				tabela_hash[hk].status = -2;
				break;
			} else
				i++;
		}
		if(i == m) cout<<"Elemento nao existe."<<endl;
		for(int j=0;j<m;j++)
			if(!tabela_hash[j].status)
				cout<<j<<":"<<tabela_hash[j].k<<" ";
		cout<<endl;
	}
	
	return 0;
	
}
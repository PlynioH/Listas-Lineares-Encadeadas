#include <iostream>

int main(){
	
	int seq1[12], seq2[12], seq3[24];
	int i, n1, n2, j, a;
	
	std::cout << "Lista 1\n";
	//sequencia 1
	for(i=0;i<12;i++)
	{
		std::cout << "Digite um Numero: ";
		std::cin >> seq1[i];
		
		if(seq1[i] < 0)
		{
			n1 = i;
			break;
		}
	}
	
	std::cout << "\nLista 2\n";
	//sequencia 2
	for(i=0;i<12;i++)
	{
		std::cout << "Digite um Numero: ";
		std::cin >> seq2[i];
		
		if(seq2[i] < 0)
		{
			n2 = i;
			break;
		}
	}
	
	//sequencia intercalada
	if(n1 == n2)
	{
		for(i=0,j=0;i<24,j<12;i+=2,j++)
		{
			if(seq1[j] < 0)
			{
				seq1[j] = (-1);
			}
			if(seq2[j] < 0)
			{
				seq2[j] = (-1);
			}
		
			seq3[i] = seq1[j];
			seq3[i+1] = seq2[j];
		
			if(seq3[i] == (-1))
			{
				a = i;
			}
		
		}
	}
	//Arrumar quando um vetor for maior que o outro, o preenchendo com -1
	//Obs talvez uma função para contar quando o vetor tiver tamanhos diferentes seja melhor
	else if(n1 != n2)
	{
		for(i=0,j=0;i<24,j<12;i+=2,j++)
		{
			seq3[i] = seq1[j];
			seq3[i+1] = seq2[j];
			a = i;
		}
	}
	//Saida das Sequencias
	for(i=0;i<n1;i++)
	{
		std::cout << seq1[i] << "\n";
		
		if(seq1[i] < 0)
		{
			break;
		}
	}
	
	std::cout << "\n---------\n";
	
	for(i=0;i<n2;i++)
	{
		std::cout << seq2[i] << "\n";
		
		if(seq2[i] < 0)
		{
			break;
		}
	}
	
	std::cout << "\n---------\n";
	
	for(i=0;i<24;i++)
	{
		if(seq3[i] >= (-1))
		{
			std::cout << seq3[i] << "\n";
		}
		
		if(seq3[i] >= a)
		{
			break;
		}
		
	}
	
	return 0;
}

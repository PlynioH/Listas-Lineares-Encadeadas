#include <iostream>

int main(){
	
	int seq[12], i, n;
	
	std::cout << "Digite um Numero: ";
	std::cin >> seq[0];
	
	for(i=1;i<10;i++)
	{
		std::cout << "Digite um Numero: ";
		std::cin >> seq[i];
		
		if(seq[i] < 0)
		{
			n = i;
			break;
		}
		
		while(seq[i]%seq[0]!=0)
		{
			std::cout << "Digite Novamente: ";
			std::cin >> seq[i];
			
			if(seq[i]==0)
			{
				n = i ;
				break;
			}
		}
		
	}
	
	for(i=0;i<n;i++)
	{
		std::cout << seq[i] << "\n";
		
		if(seq[i] < 0)
		{
			break;
		}
	}
	
	return 0;
}

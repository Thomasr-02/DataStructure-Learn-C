//FACTORIAL COM RECURSAO
#include <stdio.h>

int Factorial(int terms)
{
	if (terms==0){
		return 1;
	}
	else{
		return terms*Factorial(terms-1);		
	}
	
}


int main()
{
	int terms;
	printf ("-------------------FACTORIAL--------------------\n");
	printf ("Digite o numero para o calculo do fatorial:");
	while(1){
		scanf("%d",&terms);
		if (terms<0){
			printf ("\nDigite um numero valido:");	
		}
		else break;
		
	}	
		
	printf ("Factorial = %d",Factorial(terms));
	return 0;	
}

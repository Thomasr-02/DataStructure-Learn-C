// FIBONACCI SEM RECURSAO
#include <stdio.h>

static int contador=2;

void Fibonacci(int terms,int *vector){
	for (int i=0; i<terms;i++){
		if (i==0){
			printf ("0\n");
			vector[0]=0;	
		}
		else if(i==1){
			printf ("1\n");
			vector[1]=1;			
		}
		else{
			vector[i]=vector[contador-1]+vector[contador-2];
			contador++;
			printf ("%d\n",vector[i]);		
		}
	}
}

int main ()
{
	printf ("-------------------FIBONACCI--------------------\n");
	int terms;
	printf ("Deseja mostrar quantos termos da serie de Fibonacci :");
	scanf ("%d",&terms);
	int vector[terms];
	
	Fibonacci(terms,vector);
	return 0;
}


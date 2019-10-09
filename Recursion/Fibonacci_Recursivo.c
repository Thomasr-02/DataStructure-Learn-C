//FIBONACCI COM RECURSAO
#include <stdio.h>

static int contador=1;

int Fibonacci(int n)
{
	if (n ==1 || n==0){	
		return 1;
	}
			
	else{
		contador++;
		return Fibonacci(n-1) + Fibonacci(n-2);
	}
	
}


int main()
{
	printf ("-------------------FIBONACCI--------------------\n");
	int n;
	printf ("Deseja mostrar quantos termos da serie de Fibonacci :");
	scanf ("%d",&n);
	//printf ("\n%d",Fibonacci(n));
	for (int i=0; i < n ;i++){
		printf ("%d\n", Fibonacci(i+1));
	}
	return 0;	
}

#include <stdio.h>
#include <string.h>
#define TABLE_SIZE 10


int array[TABLE_SIZE];
int colisao[TABLE_SIZE];


int hash (int value){
	colisao[value%TABLE_SIZE]+=1;
	return value%10;
}

int inserir (int value){
	array[hash(value)] = value;
}


int main ()
{
	int i,j;
	
	for (i=0 ;i < TABLE_SIZE; i++)
	{
		inserir(i*13-i);
	}
	
	
	printf ("\n\tValores a ser colocados.\n");
	for (j=0 ; j< TABLE_SIZE; j++)
	{
		printf (" %d \n", array[j]);	
	}
	printf ("\n\tCOLISOES\n");
	for (j=0 ; j< TABLE_SIZE; j++)
	{
		printf (" %d \n", colisao[j]);	
	}
}


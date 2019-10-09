#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>


void sort (int array[],int max) {
  int i, j, min, aux;
  
  for (i = 0; i < (max - 1); i++) {
    min = i;
    for (j = i+1; j < max; j++) {
      if (array[j] < array[min]) {
   min = j;
      }
    }
	if (i != min) {
      aux = array[i];
      array[i] = array[min];
      array[min] = aux;
    }
  }
  /* Imprime o array ordenado */
  for (i = 0; i < max; i++) {
    printf (" %d ",array[i]);
  }
  printf ("\n");
}


int PesquisaBinaria ( int array[], int search , int N){
 int inf,sup,meio,contador=1;
 inf=0;
 sup=N-1;
	 while (inf<=sup){
	    meio=(inf+sup)/2;
	    if (search==array[meio]){
			contador++;
			printf ("\nEncontrei %d \nApos %d interacao.\n",search,contador);
			return meio;
		}   
	  	else if (search<array[meio]){
	        contador++;
			sup=meio-1;
		}
	    else{
			contador++;      
	       	inf=meio+1;
		}

	}
	printf ("\nNao contem o numero %d nesse array.\n",search);
 	return -1;   /* não encontrado */
}



int main (){
	int j,i,k,p,tam,q,search;
	int array[100];
	int contador,encontrou;
	srand(time(NULL));

	for (i=0 ; i<100 ; i++){
		array[i]= rand() %100;	
	}
	
	for (j=0 ; j<100 ; j++){
		printf (" %d  ", array[j]);
	}
	printf ("\nDigite o numero que deseja pesquisar entre 0 - 100:  ");
	scanf ("%d", &search);


	for (k=0 ; k<100; k++)
	{
		if(array[k]==search){
			encontrou=1;
			printf ("\nEncontrei %d \nApos %d interacao.\n",search,k+1);	
		}	
	}

	if (encontrou ==0){
			printf ("\nNao contem o numero %d nesse array.\n",search);
	}
	

	printf ("\n\n----------------------------------------------\n");
	printf ("\tUltilizando pesquisa binaria ...");
	printf ("\n\n----------------------------------------------\n");

	sort (array,100);
	tam =100;
	PesquisaBinaria(array,search,tam);
	
}

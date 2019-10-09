//FUNCAO DE RASH MULTIPLICATIVA
#include <stdio.h>


int TABLE_SIZE = 10;
char colisao[10]={0};

int Hash(int chave, int TABLE_SIZE){
	static int contador;
	int retorno;
	float A = 0.2313346;
	float val = chave * A;
	val = val - (int)val;	
	retorno =(int)(TABLE_SIZE * val);
	
	///variavel para colocar colisao TRUNCADA
	colisao[retorno]+=1;	//ARMAZENA QUANTIDADE DE COLISOES POR BUCKET
	contador++;
	return retorno;
}

int main ()
{
	char vetorCha[10];
	int j,i;
	char TABLE[10];
	for (i=0 ; i<TABLE_SIZE ; i++)
	{
		j=i;
		vetorCha[j] =Hash(i*3,TABLE_SIZE);
//		colisao(vetorCha[j]);	
	}	
	
	int k;
	for (k=0 ; k<TABLE_SIZE ; k++)
	{
		printf ("%d\n",vetorCha[k]);
	}

	int w;
	printf ("\n\n\tCOLISOES \n\n");
	for (w=0 ; w<TABLE_SIZE ; w++)
	{
		printf ("posicao [%d] - > %d colisoes\n",w,colisao[w]);
	}
}

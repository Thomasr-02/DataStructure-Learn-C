//SOMATORIO ULTILIZANDO RECURSAO

#include <stdio.h>

int somatorio(int contador, int size, int vector[])
{
	if(size == 0)
        return 1;
    else
    	contador++;
    	return (vector[contador] + somatorio(contador+1,size-1,vector) );
}

int main()
{
	printf ("-------------------SOMATORIO--------------------\n");
	int size=2;
	int vector [2];
	static int contador=-1;
    vector[0]=1;
	vector[1]=1;
	vector[2]=3;	
	printf("SOMATORIO= %d\n", somatorio(contador,size,vector));


}

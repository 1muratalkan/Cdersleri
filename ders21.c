 #include <stdio.h>
#include <stdlib.h>



int main() {
	// y�ld�zlarla kelebek kanad� yars�n� olu�turma 
	int i,j,k,l;
	
	for(i=1;i<=7;i++)
	{	
		for(j=1;j<=i;j++)
		{
		printf("*");
	}
		printf("\n");
			}
	
	for(k=1;k<=7;k++)
	{
		for(l=7;l>=k;l--)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
	
	return 0;
}

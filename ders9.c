#include <stdio.h>

int main() {
	//s�cakl��a g�re suyun durumunu g�steren bir kodlama yap�n�z.
	
	int su;
	
	printf("Lutfen dereceyi giriniz: ");
	scanf("%d",&su);
	
	if(su<=0)
	{
	printf("BUZ");	
	}
	if(su>0 && su<100)
	{
		printf("SU");
	}
	if(su>=100)
	{
		printf("KAYNIYOR");
	}



	return 0;
}

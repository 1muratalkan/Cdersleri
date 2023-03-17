#include <stdio.h>

int main() {
	//sýcaklýða göre suyun durumunu gösteren bir kodlama yapýnýz.
	
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

#include <stdio.h>
#include <stdlib.h>



int main() {
	
	// 1 ile kullanýcýnýn gireceði deðer arasýnaki sayýlarýn tek tek 5e bölünüp bölünmediðini bulunuz ve açýkca belirtiniz.
	int x,i;
	printf("X degerinizi giriniz: ");
	scanf("%d",&x);
	
	for(i=1;i<=x;i++)
	{
	if(i%5==0)
	{
		printf("%d sayisi 5'e tam bolunmektedir. \n",i);
	}
	else
	{
		printf("%d sayisi 5'e tam bolunmemektedir.\n",i);
	
	}
	
	}	
	
	return 0;
	}

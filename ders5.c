#include<stdio.h>

int main(){
/*	
	//klavyeden bir kenarý girilen karenin alan ve çevresini bulan c projesini kodlayýn
	
	int kenar,alan,cevre;
	printf("Karede Alan ve Cevre Hesabi\n\n");
	printf("Lutfen kenari giriniz: ");
	scanf("%d",&kenar);
	
	alan= kenar*kenar;
	cevre= kenar*4;
	
	printf("Karenin Alani: %d \nKarenin Cevresi: %d",alan,cevre);
	*/
	
	
	//*************************************************************************************************************
	
	//Bilgi: Mýsýr:2TL Kola:2TL Su:1TL Bilet:8TL
	
	int misir,kola,su,bilet,borc;
	
	printf("Misir Adeti: ");
	scanf("%d",&misir);
	printf("Kola Adeti: ");
	scanf("%d",&kola);
	printf("Su Adeti: ");
	scanf("%d",&su);
	printf("Bilet Adeti: ");
	scanf("%d",&bilet);
	
	borc=(misir*2)+(kola*2)+(su*1)+(bilet*8); 	
	printf("Toplam Borcunuz: %d  TL...",borc)
	
	
	return(0);
}

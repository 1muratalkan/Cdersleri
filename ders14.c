#include <stdio.h>
#include <stdlib.h>


int main() {


/*********************************************************************************************
// kullanýcýnýz sizin için girdiði 3 basamaklý sayýyý basamaklarýna yýrýp bilgi veriniz.
	
	int girilen,y,o,b;
	
	printf("Lutfen 3 basamakli sayinizi giriniz : ");
	scanf("%d",&girilen);
	
	
	y=girilen/100;
	o=(girilen%100)/10;
	b=girilen%10;
	
	
	printf("Yuzler basamagindeki sayi: %d \n",y);
	printf("Onlar basamagindeki sayi: %d \n",o);
	printf("Birler basamagindaki sayi: %d \n",b);
*/	
	
//********************************************************************************************	
	
	// proje 2:
	// 1 ile 20 arasýndaki çift sayýlar ýlisteleyen ama 14 sayýsýný listelemeyen c kodunu yazýnýz.
	
	int i;
	i=1;
	while(i<=20)
	{

		if(i%2==0 && i!=14)
		{
		printf(" %d",i);	
			
		}
		i++;
	/*	if(i==0)
		{
			i=2;
		}
		if(i==14)
		{
			i=16;
		} 
 */
 	
	}
	
	
	
/*	//proje 3:
	// faktöriyel alma iþlemini while döngüsü ile yapýnýz.
	
	
	int sayi,faktor;
	faktor=1;
	printf("Sayiniz: ");
	scanf("%d",&sayi);
	
	while(sayi>=1)
	{
		faktor=faktor*sayi;
		sayi--;
	}
	printf("Faktoryel degeri: %d",faktor);
	
	
*/

	return 0;
}

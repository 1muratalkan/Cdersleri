#include <stdio.h>
#include <stdlib.h>


int main() {


/*********************************************************************************************
// kullan�c�n�z sizin i�in girdi�i 3 basamakl� say�y� basamaklar�na y�r�p bilgi veriniz.
	
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
	// 1 ile 20 aras�ndaki �ift say�lar �listeleyen ama 14 say�s�n� listelemeyen c kodunu yaz�n�z.
	
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
	// fakt�riyel alma i�lemini while d�ng�s� ile yap�n�z.
	
	
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

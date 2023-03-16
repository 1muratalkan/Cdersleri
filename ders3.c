#include <stdio.h>

int main(){
	
/*	char kitapad[30];
	printf("Kitap Adini Giriniz: ");
	scanf("%s",kitapad);
	printf("Girilen Kitap Ismi: %s",kitapad);
	
	*/
	
	char ad[10],soyad[10],yas[2],sehir[13],meslek[15];
	
	printf("Adiniz : ");
	scanf("%s",ad);
	printf("Soyadiniz : ");
	scanf("%s",soyad);
	printf("Yasiniz : ");
	scanf("%s",yas);
	printf("Sehriniz : ");
	scanf("%s",sehir);
	printf("Mesleginiz : ");
	scanf("%s",meslek);
	
	printf("\n\n");
	printf("-----Girilen Bilgiler-----\n");
	printf("\n\n");
	printf("Adi ve Soyadi : %s %s \n",ad,soyad);
	printf("Yasi : %s\n",yas);
	printf("Meslegi ve Sehri : %s - %s \n",meslek,sehir);
	printf("\n\n");
	printf("---Girilen bilgiler icin tesekkur ederiz---");
	
	
	
	
	
	
	return 0;
}

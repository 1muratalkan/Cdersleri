#include <stdio.h>
#include <stdlib.h>


int main() {


/*// Ay say�s�n� girip kkar��l���n� yaz�l� olarak ald���n�z kodlamay� yap�n�z.

	int ay;	
	printf("Lutfen kacinci aya gitmek istediginizi giriniz: ");
	scanf("%d",&ay);
	
	switch(ay)
	{
		case 1: printf("Ocak");
		break;
		case 2: printf("Subat");
		break;
		case 3: printf("Mart");
		break;
		case 4: printf("Nisan");
		break;
		case 5: printf("Mayis");
		break;
		case 6: printf("Haziran");
		break;
		case 7: printf("Temmuz");
		break;
		case 8: printf("Agustos");
		break;
		case 9: printf("Eyl�l");
		break;
		case 10: printf("Ekim");
		break;
		case 11: printf("Kasim");
		break;
		case 12: printf("Aralik");
		break;
		default: printf("Hatali bir sayi girdiniz!!!!");
		break;
	}

	
*/	//*****************************************************************
	
	// 4 adet dersin ba� harfleri ile derslerin ekrana yaz�ld��� bir kodu yaz�n�z.
	char dersler;
	printf("Ders kodunu giriniz: ");
	scanf("%s",&dersler);
	
	switch(dersler)
	{
		case 'm': printf("matematik");
		break;
		case 't': printf("turkce");
		break;
		case 'f': printf("fizik");
		break;
		case 'k': printf("Kimya");
		break;
		default: printf("Hatali bir harf girisi");
		break;
	}


	
	return 0;
}

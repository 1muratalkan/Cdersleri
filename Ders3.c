#include<stdio.h>
#include <stdlib.h>
int main (){
	char kitapadi[20], kitapyazari[20], sayfasayisi[4], basimtarihi[4], basimevi[20], a[20]; 

	printf("Merhaba, lutfen kitabinizin adini giriniz: ");
	scanf("%s",kitapadi);

	printf("Kitap yazarini giriniz: ");
	scanf("%s",kitapyazari);
	
	printf("Kitap sayfa sayisini giriniz: ");
	scanf("%s",sayfasayisi);
	
	printf("Kitap basim tarihini giriniz: ");
	scanf("%s",basimtarihi);
	
	printf("Kitap basim evini giriniz: ");
	scanf("%s",basimevi);

	printf("Bilgileri girdiginiz icin tesekkur ederiz\n");
	
	printf("Lutfen bilgilerin tamamini gormek icin bir harfe basip, entera basiniz: ");
	scanf("%s",a);
	printf("\n\n\n");
	
	
	printf("Kitap adi:%s\n",kitapadi);
	printf("Kitap Yazari:%s\n",kitapyazari);
	printf("Kitap Sayfa Sayisi:%s\n",sayfasayisi);
	printf("Kitap Basim Tarihi:%s\n",basimtarihi);
	printf("Kitap Basim Evi:%s\n",basimevi);
	printf("\n\n\n");
	
	
	return 0;
}
	

#include <stdio.h>
#include <stdlib.h>



int main() {
	/*Ygs 1 Puan Türü Hesaplama
	Türkçe:1.999
	Mat:3.998
	sosyal:1
	Fen:2.999

*/

	float turkce,matematik,sosyal,fen,sonuc,taban;
	
	taban=100.160;
	printf("Turkce Netiniz: ");
	scanf("%f",&turkce);
	
	printf("Matematik Netiniz: ");
	scanf("%f",&matematik);
	
	printf("Sosyal Bilgiler Netiniz: ");
	scanf("%f",&sosyal);
	
	printf("Fen Bilgisi Netiniz: ");
	scanf("%f",&fen);
	

	sonuc= turkce*1.999+matematik*3.998+sosyal*1+fen*2.999+taban;
	
	printf("YGS 1 Puan Turunde Sonucunuz: %f",sonuc);





	return 0;
}

#include<stdio.h>

int	 main() {
	
	char kitabadi[22]="Avucunuzda ki kelebek";
	char yazar[20]="Ahmed Serif Izgoren";
	char sayfa[3]="785";
	char tur[6]="Hikaye";
	char basimyili[5]="2012";
	
	printf("***** KITAP TANITIM ALANI *****\n\n\n");
	printf("kitapinizin adi: %s\nkitabinizin yazari: %s\n",kitabadi,yazar);
	printf("sayfa: %s\n",sayfa);
	printf("tur: %s\n", tur);
	printf("basim yili: %s\n\n\n",basimyili);
	printf("***********************\n\n");
	
	return 0;
}

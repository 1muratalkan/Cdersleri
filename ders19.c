#include <stdio.h>
#include <stdlib.h>

int main() {
	
// diziler yardýmý ile faktoryel hesaplama
	int sayilar[]={1,2,3,4,5,6};
	int faktor=1;
	int i;
	
	for(i=0;i<5;i++)
	{
		faktor=faktor*sayilar[i];
		
	}
	printf("%d",faktor);

	return 0;
}


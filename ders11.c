#include <stdio.h>
int main() {
	
	// klavyeeden girilen sayýnýn faktoreliyelini bulunuz
	
	int i,x;
	int faktoryel=1;
	printf("Faktoriyelini bulmamizi istediginiz sayiyi giriniz: ");
	scanf("%d",&x);
	
	for(i=1;i<=x;i++)
	{
		faktoryel=faktoryel*i;
		
	}
	
	printf("%d faktoriyel : %d 'dir",x,faktoryel);
	
	

	return 0;
}

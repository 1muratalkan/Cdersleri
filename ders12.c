#include <stdio.h>


//fibonacci serisi ilk 10 elamanýný listeleyen kodu yazýnýz.
//tribonacci serisi ilk 10 elemanýný listeleyen kodu yazýnýz.


int main() {
/*	
	int x,a,b,c,i;
	a=1;
	b=1;
	printf("x: ");
	scanf("%d",&x);
	
	printf("%d\n%d\n",a,b);
	for(i=1;i<=x-2;i++)
	{
		c=b+a;
		a=b;
		b=c;
		printf("%d\n",c);
	}
	
	*/
	
	int a,b,c,d,x,i;
	
	printf("X: ");
	scanf("%d",&x);
	
	a=1;
	b=1;
	c=1;
	
	printf("%d\n%d\n%d\n",a,b,c);
	
	for(i=1;i<=(x-3);i++)
	{
		d=c+b+a;
		a=b;
		b=c;
		c=d;
	printf("%d\n",d);	
	} 
	

	
}

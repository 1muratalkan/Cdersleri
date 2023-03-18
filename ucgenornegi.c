#include<stdio.h>

int main()
{
	int i,j,k,taban,a,n;	
	
	printf("Tabani kac yildizli eskenar ucgen istiyorsun? = ");
	scanf("%d",&taban);	
	
	for (i=1;i<=taban;i++)
	{					
	for(j=taban;j>=i;j--)
	{
	printf(" ");
	}
	for(k=1;k<=i;k++)
	{
	printf("+ ");
	}	
	
	printf("\n");
	
	}

	return 0;
}

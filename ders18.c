#include <stdio.h>
#include <stdlib.h>

int main() {

	int sayilar[]={1,2,3,4,5,6,7,8,9};
	int i;
	for(i=0;i<9;i++)
	{
		if(i==0)
		{ printf("%d -",sayilar[i]);
		i++;		
		}
		if(i==8)
		{
		printf("%d",sayilar[i]);
		break;
		}
		
		printf("%d -",sayilar[i]);		
		
		
		
		
	}







	return 0;
}

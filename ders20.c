#include <stdio.h>
#include <stdlib.h>

// yýldýzdan oluþan bir diküçgen kodu oluþturunuz.

int main() {

 int i,j;
 
 for(i=1;i<=20;i++)
 {
 	for(j=1;j<=i;j++)
 	{
 		printf("*");
	 } 	
	printf("\n");
 }


	return 0;
}

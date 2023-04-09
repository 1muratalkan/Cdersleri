#include<stdio.h>

int main(){
	
/*	
project 1;
	int a,b,c,d,e,f,i,j;
	
	printf("Lutfen [2][3] matris degerlerinizi sirasiyla giriniz.\n");
	printf("1. ");
	scanf("%d",&a);
	printf("2. ");
	scanf("%d",&b);
	printf("3. ");
	scanf("%d",&c);
	printf("4. ");
	scanf("%d",&d);
	printf("5. ");
	scanf("%d",&e);
	printf("6. ");
	scanf("%d",&f);
	
	printf("\n\n");

	
	int matris[2][3]={a,b,c,d,e,f};
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",matris[i][j]);
		}
		printf("\n");

	}
*/
//****************************************************************

//project 2

int satir,sutun;

	printf("Lufen satir sayinizi girin: ");
	scanf("%d",&satir);
	printf("Lutfen sutun sayinizi giriniz: ");
	scanf("%d",&sutun);
	
	int matris[satir][sutun];
	int i,j,k,l;
	printf("\n\n");
	
	for(i=0;i<satir;i++)
	{
	for(j=0;j<sutun;j++)
	{
	printf("Matris[%d][%d] --> ",i+1,j+1);
	scanf("%d",&matris[i][j]);
	}
	}
	printf("\n\n");
	printf("Olusan matris:\n");
	
	for(k=0;k<satir;k++){
		for(l=0;l<sutun;l++){
			printf("%d ",matris[k][l]);
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
}

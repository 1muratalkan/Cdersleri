/*1 #include<stdio.h>

int main(){
/* 
//proje 1;
// matrislerde toplama islemi
	
	
	int matris1[2][2]={10,12,15,18};
	int matris2[2][2]={8,11,14,6};
	int toplam[2][2];
	
	int i,j,k,l;
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			toplam[i][j]=matris1[i][j]+matris2[i][j];
		}
	}

	for(k=0;k<2;k++){
		for(l=0;l<2;l++){
			printf("%d ",toplam[k][l]);
		}
		printf("\n");
	}
	 */
	//****************************************************************************
	
	//[3][2] bir matrisi kullanýcýdan alýn ve toplayýn
//	int m1[3][2];
//	int m2[3][2];
/*1	
	int m1a,m1b,m1c,m1d,m1e,m1f;
	int m2a,m2b,m2c,m2d,m2e,m2f;
	int m1[3][2]={m1a,m1b,m1c,m1d,m1e,m1f};
	int m2[3][2]={m2a,m2b,m2c,m2d,m2e,m2f};
	int i,j,k,l;	
	int toplam[3][2];	
		
	printf("Lutfen 1. matrisinizin degerlerini sirasiyle giriniz: \n");
	scanf("%d",&m1a);
	scanf("%d",&m1b);
	scanf("%d",&m1c);
	scanf("%d",&m1d);
	scanf("%d",&m1e);
	scanf("%d",&m1f);
	printf("\n");
	
	printf("Lutfen 2. matrisinizin degerlerini sirasiyle giriniz: \n");
	scanf("%d",&m2a);
	scanf("%d",&m2b);
	scanf("%d",&m2c);
	scanf("%d",&m2d);
	scanf("%d",&m2e);
	scanf("%d",&m2f);
	

	
/*	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
		toplam[i][j]=m1[i][j]+m2[i][j];
		}
	}
	
	for(k=0;k<3;k++){
		for(l=0;l<2;l++){
			printf("%d ",toplam[k][l]);
		}
		printf("\n");
	}
*/
/*
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			toplam[i][j]=m1[i][j]+m2[i][j];
		}
	}

	for(k=0;k<3;k++){
		for(l=0;l<2;l++){
			printf("%d ",toplam[k][l]);
		}
		printf("\n");
	}	
	
	
	// tamamlanamadý................... problem var bidaha düþün
	
	return 0;
}*/


#include <stdio.h>

int main() {
    int matrix1[3][2], matrix2[3][2], sum[3][2];
    int i, j;

    // Input first matrix
    printf("Enter the elements of the first matrix: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input second matrix
    printf("Enter the elements of the second matrix: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Add the two matrices
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the sum matrix
    printf("The sum of the two matrices is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

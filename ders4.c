#include<stdio.h>

int main(){
	
	int bagaj,el,bagajfazla,elfazla,odenecek;
	printf("Lutfen Bagaj Kilo Degerini Giriniz: ");
	scanf("%d",&bagaj);
	printf("Lutfen El Bagaj Kilo Degerinizi Giriniz: ");
	scanf("%d",&el);
	
	bagajfazla = bagaj-15;
	elfazla = el-8;
	odenecek = (bagajfazla+elfazla)*5;
	
	printf("Toplam fazla kilo sayiniz Bagaj icin : %d - El bagaji icin: %d \n",bagajfazla,elfazla);
	printf("Ucret: %d",odenecek);

	
	
	
	
	return(0);
}

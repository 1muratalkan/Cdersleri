#include <stdio.h>
int main() {
	
	float s1,s2,s3,proje,ortalama;
	
	printf("Birinci sinav notu: ");
	scanf("%f",&s1);
	printf("Ikinci sinav notu: ");
	scanf("%f",&s2);
	printf("Ucuncu sinav notu: \n");
	scanf("%f",&s3);
	printf("Proje notu: ");
	scanf("%f",&proje);
	
	ortalama=(s1+s2+s3+proje)/4;
	
	if(ortalama>=65)
	{
		printf("Ortalama notunuz: %f - Bu not ile sinifi gectiniz.",ortalama);
	}
	else
	{
		printf("Ortalama notunuz: %f - Bu not ile siniffta kaldiniz.",ortalama);
	}
	
	
	
}

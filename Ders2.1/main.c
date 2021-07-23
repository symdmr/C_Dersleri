#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	/* -------------if deger bloglari-------------*/
	int s1,s2,ort;
	
	printf("sinav1 degerini giriniz: ");
	scanf("%d", &s1);
	
	printf("sinav2 degerini giriniz: ");
	scanf("%d", &s2);
	
	ort=(s1+s2)/2;
	
	printf("ogrenci ortalamasi: %d\n",ort);
	if(ort>=50 && ort<100)
	{
		printf("ogrenci ortalamasi sinifi gecmek icin yeterli \n");
	}
	if(ort>=35 && ort<50)
	{
		printf("ogrenci butunlemeye girebilir \n");
	}
	if(ort<35)
	{
		printf("ogrenci ortalamasi sinif gecmek icin yeterli degil \n");
	}
	
	/* -------------donguler-------------*/
	/*klavyeden girilen sayinin faktoriyelini bulma*/
	int i;
	int faktor=1;
	int sayi;
	
	printf("faktoriyel hesaplamak icin bir sayi girin: \n");
	scanf("%d", &sayi);
	
	for(i=1;i<=sayi;i++)
	{
		faktor=faktor*i;
	}
	printf("hesaplanan faktoriyel: %d",faktor);
	
}

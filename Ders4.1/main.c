#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char islem;
	int num1,num2,sonuc;
	
	printf("islem yapmak istediginiz ilk sayiyi girin: ");
	scanf("%d", &num1);
	printf("islem yapmak istediginiz ikinci sayiyi girin: ");
	scanf("%d", &num2);
	printf("hangi islemi yapacaginizi girin: ");
	scanf("%s", &islem);
	
	switch(islem)
	{
		case '+':
			sonuc= num1+num2;
			printf("sonuc: %d", sonuc);
			break;
		case '*':
			sonuc= num1*num2;
			printf("sonuc: %d", sonuc);
			break;
		default: printf("bu islem gerceklestirilemez");
		break;
	}
	
	printf("\n\n");
	int dizi[100];
	int i, sayi;
	 
	printf("eleman sayisi: ");
	scanf("%d", &sayi);
	
	for(i=0; i<sayi; i++)
	{
		printf("dizinin %d. degerini giriniz: ", i+1);
		scanf("%d", &dizi[i]);
	}
	
	for(i=0; i<sayi; i++)
	{
		printf("%d ",dizi[i]);
	}
	
}

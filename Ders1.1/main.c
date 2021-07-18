#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	printf("selam Dunya \n");
	printf("alt satira gectim \n\n");
	
	// \n ile alt satýra geçilir
	/* %s ile yazdýrma esnasýnda istediðim deðiþkeni istediðim yerde konumlandýrýrým*/
	
	char kitapadi[30] = "Tahrir Vazifeleri";
	printf("kitabin adi: %s\n", kitapadi);
	
	printf("\n****** scanf kullanimi ******** \n");
	char kullaniciadi[30],email[30];
	printf("kullanici adini giriniz: ");
	scanf("%s",kullaniciadi);
	
	printf("email giriniz: ");
	scanf("%s",email);
	
	printf("girilen kullanici adi: %s - email: %s \n",kullaniciadi, email );
	
	printf("\n****** degiskenler ******** \n");
	int sayi = 6;
	printf("Tanimlanan sayi: %d \n", sayi);
	
	printf("\n****** degiskenler int ve float ******** \n");
	
	/*bagaj sýnýrý 23kg olan bir uçakta fazladan kg baþýna 5TL alýnýrsa müþterinin ödeyeceði tutarý bulun*/
	int bagajtoplam;
	
	printf("bagaj kg 23ten fazlaysa olculen toplam bagaji giriniz:");
	scanf("%d", &bagajtoplam);
	int bagajfarki = (bagajtoplam-23);
	int odenecektutar = (bagajfarki*5);
	
	printf("bagaj sinirini %d kg gecmekte ve odencek tutar %d TL olarak hesaplanmaktadýr \n\n", bagajfarki, odenecektutar);
	
	printf("\n****** degiskenler float ******** \n");
	
	float ondaliksayi, sayikaresi;
	
	printf("ondalikli sayi giriniz: ");
	scanf("%f", &ondaliksayi);
	sayikaresi = ondaliksayi*ondaliksayi;
	printf("girilen sayi: %f", sayikaresi);
	
	
	
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main() {
	
	//1-20 aras�ndaki �ift say�lar� listeleyen ama 14� listelemeyen program
	int i=2;
	while(i<=20)
	{
		if(i!=14 && i%2==0)
		{
			printf("%d \n",i);
			i++;
		}
		else
		{
			i++;
		}
	}
	
	printf("----------------------\n");
	
	//girilen say�n�n fakt�riyelini while ile bulma
	int sayi;
	int faktor =1;
	
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	
	while(sayi>1)
	{
		faktor = (faktor*sayi);
		sayi = (sayi-1);
	}
	printf("sonuc: %d",faktor);
	
	
	
}

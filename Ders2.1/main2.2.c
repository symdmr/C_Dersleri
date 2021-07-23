#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*fibonacci serisinin ilk 10 elemanýný listeleyen kodu yazma// for dongusunde 8 kez donmesinin sebebi a ve b nin zaten degerinin olmasý*/

int main() {
	
	int a,b,c,i;
	a=1;
	b=1;
	
	printf("%d \n",a);
	printf("%d \n", b);
	
	for(i=1; i<=8; i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d \n",c);
	}
	
	printf("\n\n");
	
	/*1 ile 50 arasinda 5 e tam bolunen sayilari listeleyen program */
	int x;
	
	for(x=1; x<=50; x++)
	{
		if(x%5 ==0)
		{
			printf("%d \n",x);
		}
	}
	
	printf("\n\n");
	
	/*klavyeden girilen 3 basamakli sayiyi basamaklarina ayiran program*/
	printf("3 basamakli sayi giriniz: \n");
	int sayi;
	scanf("%d", &sayi);
	
	int birler, onlar, yuzler;
	
	yuzler = sayi/100;
	printf("%d\n",yuzler);
	
	onlar=sayi/10;
	onlar=onlar%10;
	printf("%d\n",onlar);
	
	birler=sayi%10;
	printf("%d\n",birler);
	
	
	
}

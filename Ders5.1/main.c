#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main() {
	
	//yýldýzlarla kelebek kanadý yapma
	
	int i,j,a,b;
	
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("*");
		}
		for(a=0; a<=10-(2*i);a++)
		{
			printf(" ");
		}
		for(j=1; j<=i; j++)
		{
			printf("*");
		}
		printf("\n");
	}	
	
	for(i=1; i<=5; i++)
	{
		for(j=5; j>=i; j--)
		{
			printf("*");
		}
		for(b=2; b<=(2*i);b++)
		{
			printf(" ");
		}
		for(j=5; j>=i; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n\n");
	//klavyeden girilen degerlere gore yýldýzlarla dikdortgen olusturma
	int x,y,kenar1,kenar2;
	printf("dikdorgenin bir kenarini giriniz: ");
	scanf("%d", &kenar1);
	printf("dikdortgenin diger kenarini giriniz: ");
	scanf("%d", &kenar2);
	
	for(x=1; x<=kenar1; x++)
	{
		for(y=0; y<kenar2; y++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
	printf("\n\n");
	//klavyeden girilen boy degerine gore dik ucgen olusturma
	int k,l,boy;
	printf("dikucgenin boyu kac birim olsun: ");
	scanf("%d",&boy);
	
	for(k=1; k<=boy; k++)
	{
		for(l=1; l<=k; l++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

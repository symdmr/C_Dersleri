#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	//çoklu matris
	int matris[2][3] = {1,2,3,4,5,6};
	//köþeli parantezdeki 2 satýr, 3 sütun sayýsýný ifade ediyor
	
	int i,j;
	for(i=0; i<=1; i++)
	{
		for(j=0; j<=2; j++)
		{
			printf("%d  ", matris[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	//klavyeden girilen degerlere gore matris olusturma
	int satir,sutun,a,b;
	int matris1 [satir][sutun];
	
	printf("matris icin satir sayisi giriniz: ");
	scanf("%d", &satir);
	printf("matris icin sutun sayisi giriniz: ");
	scanf("%d", &sutun);
	
	for(a=0; a<satir; a++)
	{
		for(b=0; b<sutun; b++)
		{
			printf("\n [%d][%d] ---->", a+1,b+1);
			scanf("%d", &matris1[a][b]);
		}
		printf("\n");
	}
	
	printf("girilen degere gore matris: \n");
	for(a=0; a<satir;a++)
	{
		for(b=0; b<sutun; b++)
		{
			printf("%d ", matris1[a][b]);
		}
		printf("\n");
	}
	
	printf("\n ");
	//matrislerde toplama
	int m1[2][2] = {10,20,30,40};
	int m2[2][2] = {50,60,70,80};
	int toplam[2][2];
	
	int k,l,x,y;
	for(k=0; k<2; k++)
	{
		for(l=0; l<2; l++)
		{
			toplam[k][l]=m1[k][l]+m2[k][l];	
		}
		printf("\n");
	}
	
	for(x=0; x<2; x++)
	{
		for(y=0; y<2; y++)
		{
			printf("%d ", toplam[x][y]);
		}
		printf("\n");
	}
	
	return 0;
}

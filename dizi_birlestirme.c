#include <stdio.h>
#include <stdlib.h>


int *dizileriBirlestir(int [],int,int [],int);


int main(void){
	
	int i,n;
	int dizi_1[5]={1,3,5,14,21};
	int dizi_2[7]={2,5,8,9,24,36,13};
	int *ptr;
	
	ptr =dizileriBirlestir(dizi_1,5,dizi_2,7);
	for(i=0;i<12;i++)
		printf("%d  ",ptr[i]); 
	printf("\n");
		
	return 0;
}

int *dizileriBirlestir(int dizi_1[],int boyut_1,int dizi_2[],int boyut_2)
{
	int i,k;
	int *sonuc = (int*)calloc(boyut_1+boyut_2,sizeof(int));
	for(i=0;i<boyut_1;i++)
	    sonuc[i]=dizi_1[i];
	
	
	for(k=0;k<boyut_2;i++,k++)
	    sonuc[i]=dizi_2[k];
	    
	return sonuc;
}




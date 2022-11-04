//selection sort

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){


	int a[2000];
	int i=0;
	int j=0;
	int aux=0;
	int n=0;
	int k= 0;
	int verificar;
	FILE*ex= fopen("examen.txt","rt");
	
	do{
		verificar = fscanf(ex,"%d",a+n);
		if (verificar>0){
		n++;
		}	
	}while(verificar>0);
	
	clock_t begin = clock();
	
	for (i=0; i<n; i++)
	{
		for(j=i+1; j <n; j++)
		{
			if(a[i]>a[j]){
			aux= a[i];
			a[i]=a[j];
			a[j]=aux;
			}
		}
	}
	clock_t end = clock();
	
	
	printf("Su arreglo con Selection sort: \n\n");
	
	for (i=0; i<n;i++) {
	
		printf("%d, ", a[i]);
	}
	
	double time_sel = (double)(end-begin)/CLOCKS_PER_SEC;
	printf("\n");
	printf("\n");
	printf("el tiempo fue de %.8f seconds.", time_sel);
	
	printf("\n");
	return 0;
	}
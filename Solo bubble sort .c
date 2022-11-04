
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main()
{
	int a[2000];
	int i=0;

	int aux=0;
	int n=0;
	int eliminar =2;
	int verificar;
	FILE*ex= fopen("examen.txt","rt");
	
	do{
		verificar = fscanf(ex,"%d",a+n);
		if (verificar>0){
		n++;
		}	
	}while(verificar>0);
	
	clock_t begin = clock();
		while(n>eliminar - 1)
		{
			for (i=0; i<=n-eliminar; i++)
			{
				if(a[i]>a[i+1])
				{
					aux= a[i];
					a[i]=a[i+1];
					a[i+1] = aux;

				}
			}
			eliminar++;
		}	
		clock_t end = clock();
	printf("Su arreglo en bubble sort es:  \n\n");
	for (i=0; i<n;i++) {
		printf("%d ,", a[i]);
	}
	
	double time_bub = (double)(end-begin)/CLOCKS_PER_SEC;
	printf("\n");
	printf("\n");
	printf("el tiempo fue de %.8f seconds.", time_bub);
	
	printf("\n");
	printf("\n");
	return 0;
	
	}

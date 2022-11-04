#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

	int A[2000], min, i, j, tam, k;
	int verificar;
	FILE*ex= fopen("examen.txt","rt");
	
	do{
		verificar = fscanf(ex,"%d",A+tam);
		if (verificar>0){
		tam++;
		}	
	}while(verificar>0);
	
	clock_t begin = clock();
	
	for(j= 1; j < tam; j++) {
		min = A[j];
	
		for (i=j-1;i >= 0 && A[i]> min;i = i-1)
		{
			A[i+1]= A[i];
	
		}
	
		A[i+1] = min;
	}
	clock_t end = clock();
	
	printf("\n");
	printf("INSERTION SORT DE Menor A Mayor: \n\n");
	for (i=0;i<tam; i++){
		printf("%d ,",A[i]);
		}
		printf("\n");
		printf("\n");
		
		double time_inser = (double)((end-begin)/CLOCKS_PER_SEC);
		
		printf("\n");
		printf("\n");
		printf("el tiempo fue de %.8f seconds.", time_inser);
		printf("\n");
		printf("\n");
	printf("INSERTION SORT DE Mayor a Menor: \n\n");
	for (i=tam-1;i>=0; i--){
		printf("%d, ",A[i]);
		}
		
	time_inser = (double)((end-begin)/CLOCKS_PER_SEC);
	printf("\n");
	printf("\n");
	printf("el tiempo fue de %.8f seconds.", time_inser);
	
	printf("\n");
}

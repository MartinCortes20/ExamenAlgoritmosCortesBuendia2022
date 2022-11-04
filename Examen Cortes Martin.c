#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int a[2000];
	int A[2000];
	int numero;
	int i=0;
	int j=0;
	int k= 0;
	int n=0;
	int aux=0;
	int min=0; 
	int tam=0; 
	int eliminar =2;
	int verificar;

	FILE*ex= fopen("examen.txt","rt");
	
	printf("Ingrese el ordenamiento que quiera utilizar para acomodar : \n\n");
	printf("1) Por Bubble Sort \n");
	printf("2) Por Selection Sort \n");
	printf("3) Por Insertion Sort (Recuerde que en este muestra de menor a mayor y menor a mayor )\n");
	scanf("%i",&numero);
	
	switch(numero){
		
		case 1 : 
		
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
		break;
		
		case 2 :
			
			do{
			verificar = fscanf(ex,"%d",a+n);
			if (verificar>0){
			n++;
			}	
			}while(verificar>0);
		
			clock_t inicio = clock();
			
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
			clock_t fin = clock();
			
			
			printf("Su arreglo con Selection sort: \n\n");
			
			for (i=0; i<n;i++) {
			
				printf("%d, ", a[i]);
			}
			
			double time_sel = (double)(fin-inicio)/CLOCKS_PER_SEC;
			printf("\n");
			printf("\n");
			printf("el tiempo fue de %.8f seconds.", time_sel);
			
			printf("\n");
			return 0;
		
		break;
		
		case 3 :
			do{
				verificar = fscanf(ex,"%d",A+tam);
				if (verificar>0){
					tam++;
				}	
			}while(verificar>0);
		
			clock_t in = clock();
		
			for(j= 1; j < tam; j++) {
				min = A[j];
			
				for (i=j-1;i >= 0 && A[i]> min;i = i-1)
				{
					A[i+1]= A[i];
			
				}
			
				A[i+1] = min;
			}
			clock_t out = clock();
			
			printf("\n");
			printf("INSERTION SORT DE Menor A Mayor: \n\n");
			for (i=0;i<tam; i++){
				printf("%d ,",A[i]);
				}
				printf("\n");
				printf("\n");
				
				double time_inser = (double)((out-in)/CLOCKS_PER_SEC);
				
				
				printf("el tiempo fue de %.8f seconds.", time_inser);
				printf("\n");
				printf("\n");
				
			printf("INSERTION SORT DE Mayor a Menor: \n\n");
			for (i=tam-1;i>=0; i--){
				printf("%d, ",A[i]);
				}
				
			time_inser = (double)((out-in)/CLOCKS_PER_SEC);
			printf("\n");
			printf("\n");
			printf("el tiempo fue de %.8f seconds.", time_inser);
			
			printf("\n");
		
		break;
			
	}
}
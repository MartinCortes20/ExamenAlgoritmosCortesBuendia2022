#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int a[2000];  //declaro variable entera utilizada en el codigo
	int A[2000];  //declaro variable entera utilizada en el codigo
	int numero;  //declaro variable entera utilizada en el codigo
	int i=0;  //declaro variable entera utilizada en el codigo
	int j=0;  //declaro variable entera utilizada en el codigo
	int k= 0;  //declaro variable entera utilizada en el codigo
	int n=0;  //declaro variable entera utilizada en el codigo
	int aux=0;  //declaro variable entera utilizada en el codigo
	int min=0;  //declaro variable entera utilizada en el codigo
	int tam=0;  //declaro variable entera utilizada en el codigo
	int eliminar =2;  //declaro variable entera utilizada en el codigo
	int verificar; //declaro variable entera utilizada en el codigo
	clock_t begin,end,inicio,fin,in,out; //declaramos las variables para medir el tiempo 
	double time_bub,time_inser,time_sel; //declaramos variable que nos dira el tiempo que tardo
	
	FILE*ex= fopen("examen.txt","rt");//usamos el archivo txt para usarlo como base de datos con rt por que vamos a leerlo
	
	printf("Ingrese el ordenamiento que quiera utilizar para acomodar : \n\n");
	printf("1) Por Bubble Sort \n");
	printf("2) Por Selection Sort \n");
	printf("3) Por Insertion Sort (Recuerde que en este muestra de menor a mayor y menor a mayor )\n");
	scanf("%i",&numero);
	
	switch(numero){  
	//inicie un switch para que fuera un menu de seleccion	
		case 1 : 
		begin = clock(); //inicia a contar 
			do{
				verificar = fscanf(ex,"%d",a+n);
				if (verificar>0){
				n++;
				}	
			}while(verificar>0); //en este do while, revisara el archivo txt dado para guardarlos en el arreglo 
			
			
				while(n>eliminar - 1) //inicio de bubble sort 
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
				end = clock(); //Fin de contar tiempo
			printf("Su arreglo en bubble sort es:  \n\n");
			for (i=0; i<n;i++) {
				printf("%d ,", a[i]); //muestra el arreglo
			}
			
			time_bub = (double)(end-begin)/CLOCKS_PER_SEC; //aqui hara las operaciones para pasarlo a segundos 
			printf("\n");
			printf("\n");
			printf("el tiempo fue de %.8f seconds.", time_bub); //muestra el tiempo
			
			printf("\n");
			printf("\n");
			return 0;
		break;
		
		case 2 :
			inicio = clock(); //inicia a contar 
			do{
			verificar = fscanf(ex,"%d",a+n);
			if (verificar>0){
			n++;
			}	
			}while(verificar>0); //en este do while, revisara el archivo txt dado para guardarlos en el arreglo 
		
		 
			
			for (i=0; i<n; i++) //inicio de selection sort
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
			fin = clock(); //termina de contar
			
			
			printf("Su arreglo con Selection sort: \n\n");
			
			for (i=0; i<n;i++) {
			
				printf("%d, ", a[i]);
			} //muestra arreglo
			
			time_sel = (double)(fin-inicio)/CLOCKS_PER_SEC; //aqui hara las operaciones para pasarlo a segundos
			printf("\n");
			printf("\n");
			printf("el tiempo fue de %.8f seconds.", time_sel); //muestra el tiempo 
			
			printf("\n");
			return 0;
		
		break;
		
		case 3 :
			in = clock(); //inicia a contar
			do{
				verificar = fscanf(ex,"%d",A+tam);
				if (verificar>0){
					tam++;
				}	
			}while(verificar>0); //en este do while, revisara el archivo txt dado para guardarlos en el arreglo 
		
			
		
			for(j= 1; j < tam; j++) { //inicio de insertion sort
				min = A[j];
			
				for (i=j-1;i >= 0 && A[i]> min;i = i-1)
				{
					A[i+1]= A[i];
			
				}
			
				A[i+1] = min;
			}
			out = clock();//finaliza de contar
			
			printf("\n");
			printf("INSERTION SORT DE Menor A Mayor: \n\n");
			for (i=0;i<tam; i++){
				printf("%d ,",A[i]); //muestra arreglo de menor a mayor
				}
				printf("\n");
				printf("\n");
				
				time_inser = (double)((out-in)/CLOCKS_PER_SEC); //aqui hara las operaciones para pasarlo a segundos
				
				
				printf("el tiempo fue de %.8f seconds.", time_inser); //muestra el tiempo
				printf("\n");
				printf("\n");
				
			printf("INSERTION SORT DE Mayor a Menor: \n\n");
			for (i=tam-1;i>=0; i--){
				printf("%d, ",A[i]);
				} //muestra arreglo de menor a mayor
				
			time_inser = (double)((out-in)/CLOCKS_PER_SEC); //aqui hara las operaciones para pasarlo a segundos
			printf("\n");
			printf("\n");
			printf("el tiempo fue de %.8f seconds.", time_inser);//muestra el tiempo
			
			printf("\n");
		
		break;
		
		default: printf("\n\n Ese numero no es una opcion, ingrese otro \n\n");
			
	}
	return 0;
}
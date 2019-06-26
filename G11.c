#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define total 10


/* 
*  Gabriel Brito 14147
*   
*/


int main(){ 

setlocale(LC_ALL, "Portuguese");
int v[10];
int x, inicio=0, meio , fim=9,cont;
int num;         
	do{
		
	
				
	    printf("\nPreencha o vetor ordenadamente\n");
	    for(x=0; x <10; x++){
	
	     printf("insira o elemento %d do vetor\n",x+1);
					     scanf("%d",& v[x]);
					   }
					      printf("\nInsira o numero que deseja fazer a busca \n");
					        scanf("%d",&num); 
					
					    if(v[inicio]==num) {
					      printf("o numero encontrado  no indice %d\n",inicio);
					    }else
					       if(v[fim]==num){
					        printf("o numero encontrado  no indice %d\n",fim);
	    }else { 
	
		    while(inicio<=fim) {
		      meio=(inicio+fim)/2;  
		       if (v[meio]==num){
		         printf("o numero encontrado esta no indice %d\n",meio);
		          break; 
		     }else if(num>v[meio]){
		        inicio=meio+1;   
		       }else{ 
		         fim=meio-1;    
		     	}	 
	    	} 
	 	}
	 	
			printf("\n");
			printf("\nRefazer as opções?");
			printf("\n[1 = sim] [2 = nao ]:");
			scanf("%d", &cont);
			system("cls");
			
			while(cont!=1 && cont!=2)
			{
				printf("\n Digite uma opção  válida!");
				printf("\n [1 = sim] [2 = nao ]:");
				scanf("%d", &cont);
				system("cls");
			}	 	
	 	
	}while (cont!=2);
   
    return 0;
}

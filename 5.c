#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 10

/* 
*  Gabriel Brito 14147
*   
*/


  void shell_sort(int *a, int tamanho) {

				    int i , j , valor;
				    int h = tamanho;

				    do {
				    h /= 2;
				    for(i = h; i < tamanho; i++) {
				      valor = a[i];
				      j = i - h;

				      while (j >= 0 && valor < a[j]) {
				      a[j + h] = a[j];
				      j -= h;
				      }
				      a[j + h] = valor;
				    }
				    }while(h > 1);
  }

int main() {
setlocale(LC_ALL, "Portuguese");
int i, vet[MAX], cont=0;
	do{
		
		printf("**********Shell Sort**********\n");
				for(i = 0; i < MAX; i++){
			
		  printf("Digite um valor: ");
		  scanf("%d", &vet[i]);
		 }
		shell_sort(vet, 10);
						// Imprime os valores ordenados
						printf("Valores ordenados: \n");
						
						for(i = 0; i < MAX; i++){
							
						  printf("%d \n", vet[i]);
						}
					

		printf("\nRefazer as op��es?");
		printf("\n[1 = sim] [2 = nao ]:");
		scanf("%d", &cont);
		system("cls");
		while(cont!=1 && cont!=2)
		{
			printf("\n Digite uma op��o  v�lida!");
			printf("\n [1 = sim] [2 = nao ]:");
			scanf("%d", &cont);
			system("cls");
		}
		
	}while (cont!=2);
 
}



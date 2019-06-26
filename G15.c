#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/* 
* Gabriel Brito 14147
*   
*/

   
				typedef struct tree
				{
				  int num;
				  struct tree* sad;
				  struct tree* sae;
				} Tree;

				Tree* createTree()
				{
				  
				     
  return NULL;
}


int treeIsEmpty(Tree* t)
{
  
  return t == NULL;

}


	void showTree(Tree* t)
	{
	  
	  
	  printf("<"); 
	  if(!treeIsEmpty(t))
	  {
	    
	    printf("%d ", t->num); 
			showTree(t->sae); 
	  		showTree(t->sad); 
	  }
	  printf(">"); 
}


void insertTree(Tree** t, int num)
{
  
  if(*t == NULL)
  {
    *t = (Tree*)malloc(sizeof(Tree)); 
    (*t)->sae = NULL;
    (*t)->sad = NULL; 
    (*t)->num = num; 
  } else {
    if(num < (*t)->num) 
    {
      
      insertTree(&(*t)->sae, num);
    }
    if(num > (*t)->num) 
    {
      
      insertTree(&(*t)->sad, num);
    }
  }
}


int isInTree(Tree* t, int num) {
  
  if(treeIsEmpty(t)) { 
    return 0;
  }
  
  
  return t->num==num || isInTree(t->sae, num) || isInTree(t->sad, num);
}

int main(){
	
setlocale(LC_ALL, "Portuguese");
int num1=0, num2=0, num3=0, num4=0, num5=0, num6=0, contrl=0, numexist=0, aux=0, cont=2, tamanho=0, vec[tamanho], i=0; 
	
do{
	
	printf("\nVerificar se existe uma árvore.........................[1]");
	printf("\nConstruir e exibir uma  árvore.........................[2]");
	printf("\nSair...................................................[3]\n");
	scanf("%d",&contrl);
	system("cls");
  
	
		
	while(contrl>3 || contrl<1){
			
		printf("\nDigite uma opção válida!");
		printf("\n**********************Árvore Binária**********************");
		printf("\nVerificar se existe uma árvore.........................[1]");
		printf("\nConstruir e exibir uma  árvore.........................[2]");
		printf("\nSair...................................................[3]\n");
		scanf("%d",&contrl);
		system("cls");
		
			
	}
		
	if (contrl == 1){
		Tree* t = createTree();  
		void showTree(Tree* t); 
		if(treeIsEmpty(t)) 
		{
   			printf("\n\nCriamos uma árvore, mas  está  vazia!!\n");
 		} else {
  			printf("\n\nÁrvore não está vazia!!\n");
		}
			
	}
	
	if (contrl == 2){
		Tree* t = createTree();  
		printf("Introduza o tamanho do vetor: ");
    	scanf("%d", &tamanho);
		
		for(i=0; i<tamanho; i++){
        	printf("Preencha o vector: ");
        	scanf("%d", &vec[i]);
        	insertTree(&t, vec[i]);
        }

    
  		showTree(t); 
  		printf("\nDeseja verificar a existência de algum número?");
  		printf("\n[1 = sim] [2 = não ]:");
		scanf("%d", &aux);
		system("cls");
		
		while(aux!=1 && aux!=2)
		{
			system("cls");
			printf("\n Digite uma opção  válida!");
			printf("\n [1 = sim] [2 = não ]:");
			scanf("%d", &aux);
			system("cls");
		}
		if (aux == 1 ){
			printf("\nDigite o número que deseja procurar: "); 
			scanf("%d", &numexist);
			if(isInTree(t, numexist)) { 
    			printf("\nO número %d pertence a árvore!\n",numexist);
 			} else {
    			printf("\nO número %d não pertence a árvore!\n", numexist);
 			}
		}
		if (aux ==2){
			free(t); 	
		}
		
	}
	if (contrl == 3){
		system("pause");
		return 0;
	}
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


#include <stdio.h>
#include <math.h>
#include <locale.h>

/* 
*  Gabriel Brito 14147
*   
*/


struct cartesiano {
	float pInicialX;
	float pInicialY;
	float pFinalX;
	float pFinalY;
};

typedef struct cartesiano Cartesiano;

Cartesiano create(float pix, float piy, float pfx, float pfy){
	Cartesiano c;
	
	c.pInicialX = pix;
	c.pInicialY = piy;
	c.pFinalX = pfx;
	c.pFinalY = pfy;
	
	return c;
};


void visualiza(Cartesiano c){
	printf("Posição inicial do eixo X: %.2f\n", c.pInicialX);
	printf("Posição inicial do eixo Y: %.2f\n", c.pInicialY);
	printf("Posição final do eixo X: %.2f\n", c.pFinalX);
	printf("Posição final do eixo Y: %.2f\n", c.pFinalY);
};

void trocaEixos(Cartesiano *c, float pix, float piy, float pfx, float pfy){
  c->pInicialX = pix;
  c->pInicialY = piy;
  c->pFinalX = pfx;
  c->pFinalY = pfy;

  printf("Os eixos foram alterados para: \n Inicial X: %.2f \n Inicial Y: %.2f \n FinalX: %.2f \n FinalY: %.2f\n", pix, piy, pfx, pfy);
};


float calculaDistancia(Cartesiano c){
  return sqrt(pow(c.pFinalX - c.pInicialX, 2) + pow(c.pFinalY - c.pInicialY, 2));
};


void exibeMenu(void){
  setbuf(stdin, NULL);

  printf("Pressione a tecla 1 para informar as coordenadas do plano cartesiano ou qualquer outra para sair: \n");
}

void coletaInformacoesCartesiano(

){}


int main(){
	
  setlocale(LC_ALL, "Portuguese");
  int entradaTeclado =0,cont=0;
  float pix, piy, pfx, pfy;

  
  do{ 
  printf("**************Cálculo de Plano Cartesiano**********\n");
  printf("Aperte 1 para continuar ou qualquer tecla para sair: ");
  scanf("%d", &entradaTeclado);
  
	if(entradaTeclado == 1){
	
	  
		while(entradaTeclado == 1){
		    Cartesiano cartesiano;
		
		    
		    system("cls");
		
		    setbuf(stdin, NULL); 
		    printf("Ponto inicial X: ");
		    scanf("%f", &pix);
		    
		    setbuf(stdin, NULL);
		    printf("Ponto inicial Y: ");
		    scanf("%f", &piy);
		
		    setbuf(stdin, NULL);
		    printf("Ponto final X: ");
		    scanf("%f", &pfx);
		
		    setbuf(stdin, NULL);
		    printf("Ponto final Y: ");
		    scanf("%f", &pfy);
		
		    
		    cartesiano = create(pix, piy, pfx, pfy);
		
		    
		    visualiza(cartesiano);
		  
		    printf("Distância calculada: %.2f\n\n", calculaDistancia(cartesiano));
		
		    printf("Aperte 1 para continuar ou qualquer tecla para sair: ");
			
		    scanf("%d", &entradaTeclado);
		}
   }
	if (entradaTeclado !=1){
		return 0;
	}
  }while (cont!=1);
}

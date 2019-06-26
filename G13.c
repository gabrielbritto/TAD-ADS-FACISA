#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 
*  Gabriel Brito 14147
*   
*/

bool sorte(int *a, int n){
            while ( --n >= 1 ) {
              if ( a[n] < a[n-1] ) return false;
            }
            return true;
          }
           
          void BARALHO(int *a, int n){
            int i, t, r;
            for(i=0; i < n; i++) {
                        t = a[i];
                        r = rand() % n;
                        a[i] = a[r];
                        a[r] = t;
                      }
                    }
                     
                    void bogosort(int *a, int n){
                      while ( !sorte(a, n) ) BARALHO(a, n);
                    }
           
          int main(){

            setlocale(LC_ALL, "Portuguese");
            
            int num[5] = {1, 4, 3, 6, 9};
  int i, cont=0;
  		
  		
		printf("*******************Bogo Sort******************\n");
		
  		bogosort(num,5);
  		for (i=0; i <5; i++){
  
   			printf("%d ", num[i]);
   			printf("\n");
  
  		}
return 0;
}

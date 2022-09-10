#include <stdio.h>
#include <stdlib.h>

int main(){
int i;
int t;
char cuenta[10] ;

int pv = (int) malloc(10 * sizeof(int));  

for(i=1; i<=10; i++) {  
	pv[i] = 2*(i);  
    printf("|%d|",i*2);
 
  }
  
printf("\ningresa tu número de tu cuenta: \n");
gets(cuenta);
 t=cuenta[8]-'0';
   
printf("El ultimo numero de cuenta es [%d]\n",t);
pv[t] = -1;

for(i = 10; i > 0; i--){
    printf("|%d",pv[i]); 
}
getchar();
  
  }

#include <stdio.h>
#include <stdlib.h>

//la complegidad del el programa es 0(n)

int n=0;
 int FacRecurcion(int n){
  if(n== 1 || n == 0){
  return 1;
  }else{
   n = n * FacRecurcion(n-1);
    printf("Num: %i\n", n);
  return n;
  }
  
}

int main(){
  
  printf("dame un numero: \n");
  scanf("%i",&n);
  n = FacRecurcion(n);
	printf("Resultado: %i\n", n);
	return(0);
}

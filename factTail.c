#include <stdio.h>
#include <stdlib.h>

//L acompegidad del programa es 0(2n-1)
int n=0;
int a=1;
 int FacRecurcion(int n, int a){
  if(n== 1 || n == 0){
  return 1;

    
  }else{
   n = n * FacRecurcion((n-1), a*n);
    printf("Num: %i\n", n);
  return n;
  }
  
}

int main(){

  printf("dame un numero: \n");
  scanf("%i",&n);
  n = FacRecurcion(n,a);
	printf("Resultado: %i\n", n);
	return(0);
}

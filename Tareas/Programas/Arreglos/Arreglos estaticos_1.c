#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int sustituir(char origen[],char destino[]){
	int a,b,tam,fin;
	char t;
  	char cuenta[9];
  	
  printf("ingresa tu número de tu cuenta: ");
  gets(cuenta);
 
	 t=cuenta[8]-'0';
	printf("\nEl ultimo numero de tu cuenta es: %s",&t);
	tam=strlen(origen);
	fin=0;
	b=0;
	
	destino[b+t*3-1]='1';
	destino[b+t*3-2] = '-';
	
	return fin;
		 
	
}

int main(){
	
	char c1[10] ;
	char c2[100] = "| 2| 4| 6| 8|10|12|14|16|18|20"; 
	char t;
	printf("cadena numerica: %s\n",c2);
	
	sustituir(c1,c2);
	
	
	printf(" \ncadena sustituida: %s\n",c2);
	 
	return 0;
}

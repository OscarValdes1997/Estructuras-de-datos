#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main(){
	
	
	setlocale(LC_ALL, "");
    signed char codigo[15];
	unsigned int x;
	unsigned int o;
	unsigned int numdcuenta[15]={0};
	unsigned int **row;
    

    printf("\t\t\tPor favor digite su número de cuenta ----> ");
    gets(codigo);
    for(x=0;x<strlen(codigo);x++)
        numdcuenta[x]=codigo[x]-'0';

    row=(unsigned int**)malloc(sizeof(unsigned int)*15);
    
    if(row==NULL){
        printf("\t\t\tNo fue posible asignar la memoria para la matriz de columnas, favor de reperir");
        return(1);
    }
    
    for(x=0;x<15;x++){
        row[x]=(unsigned int*)malloc(sizeof(unsigned int)*numdcuenta[x]);

        if(row[x]==NULL){
            printf("\t\t\tNo fue posible asignar la memoria para la matriz %d de linea, favor de rectificar",x++);
            exit(1);
        }
		for (o=0;o<numdcuenta[x];o++){
            row[x][o]=numdcuenta[x];
            printf("[%d]",row[x][o]);
        }
        printf("\n");
    } 
}

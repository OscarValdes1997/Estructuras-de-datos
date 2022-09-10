#include <stdio.h>

typedef struct{
	char nombre[25];
	int edad;
	int calif;
} alumno;



int main(){
	alumno a[20];
	int i,j;
	float x=0;
	float y=0;
	
	printf("\n\n\t\tcuantos alumnos desea ingresar: ");
	scanf("%d",&j);
	
	system("cls");
	
	for(i=0; i<j; i++){
	
		printf("Introduzca nombre %d: \n",i+1);
		fflush(stdin);
		gets(a[i].nombre);
		printf("Introduzca edad: \n");
		scanf("%d",&a[i].edad);
		printf("Introduzca calificaci?n: \n");
		scanf("%d",&a[i].calif);
		
		system("cls");
	}
	
	for(i=0; i<j; i++){
		x+=a[i].edad;
		y+=a[i].calif;
	}
	
	x=(float)x/j;
	y=(float)y/j;
	
	printf("\n\n\t\tPromedio de las edades: %.2f\n", x);
	printf("\t\tPromedio del grupo: %.2f\n\n\n", y);
	
	system("pause");system("cls");
	
	
	return 0;
}

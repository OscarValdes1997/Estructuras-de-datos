#include <stdio.h>
#include<locale.h>


typedef struct{
	unsigned char name[18];
	unsigned int anos;
	unsigned int promedio;
} student;



int main(){
	setlocale(LC_ALL, "");
	student students[20];
	unsigned int j; 
	unsigned int m;
	float o=0; 
	float k=0;
	printf("\t\t\t\t----------FACULDAD DE ESTUDIOS SUPERIORES ACATLÁN----------\n\t\t\t\t-------------------REGISTRO DE ALUMNOS---------------------");
	printf("\n\n\t\t\t Digite la cantidad de alumnos que desea registrar----> ");
	scanf("%d",&j);
	
	system("cls");
	
	for(m=0; m<j; m++){
		
		
		printf("\t\t\t Alumno %d\n",m+1);
		printf("\t\t\tDigite el nombre del alumno %d:",m+1);
		fflush(stdin);gets(students[m].name);
		
		printf("\t\t\tDigite la edad del alumno %d:",m+1);
		scanf("%d",&students[m].anos);
		
		printf("\t\t\tDigite la calificación del alumno %d:",m+1);
		scanf("%d",&students[m].promedio);
		
		system("cls");
	}
	
	for(m=0; m<j; m++){
		o+=students[m].anos;
		k+=students[m].promedio;
	}
	

	
	printf("\t\t\tEl promedio de las edades de los alumnos es: %f\n\n", o);
	printf("\t\t\tEl promedio del grupo es: %f", k);
	
	o=(float)o/j;
	k=(float)k/j;
	
	system("pause");
	system("cls");
	
	printf("\t\t\t\nLos alumnos registrados son: ");
	for(m=j-1; m>=0; m--){
		printf("\t\t\t\n%d. %s\n",j-m,students[m].name);
	}
	
	system("pause");system("cls");
	
	return 0;
}

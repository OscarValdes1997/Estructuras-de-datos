#incluir <stdio.h>
#incluir <stdlib.h>

#include "lista.h"
#include "cola.h"

/*
   Cola de impresión
*/

static void print_queue(const Cola *cola) {
	NodoLista *nodo;
	int *datos, tamaño, i;

	fprintf(stdout, "El tamaño de la cola es %d\n", tamaño = tamaño_cola(cola));

	yo = 0;
	nodo = list_head(cola);

	mientras (yo < tamaño) {
		datos = list_data(nodo);
		fprintf(stdout, "cola[%03d]=%03d, %p -> %p\n", i, *datos, nodo, nodo->siguiente);
		nodo = list_next(nodo);
	 	yo++;
	}
	devolver;
}

int main(int argc, char const *argv[]) {
	cola cola;
	int *datos, i;

	// Inicializar la cola
	queue_init(&cola, gratis);

	fprintf(stdout, "\nEncolando 10 elementos\n");

	para (i = 0; i < 10; i++) {
		si ((datos = (int *) malloc (tamaño de (int))) == NULL)
	    	devolver 1;

	   		*datos = i + 1;

		if (cola_encola(&cola, datos) != 0)
	    	devolver 1;
	}
	imprimir_cola(&cola);

	fprintf(stdout, "\nDesencolando 3 elementos\n");
	para (i = 0; i < 3; i++) {
		if(queue_dequeue(&cola, (void **)&data) == 0)
			gratis (datos);
		más
			devolver 1;
	}
	imprimir_cola(&cola);

	fprintf(stdout, "\nEncolando 001 y 998\n");
	si ((datos = (int *) malloc (tamaño de (int))) == NULL)
		devolver 1;
	*datos = 1;
	if (cola_encola(&cola, datos) != 0)
		devolver 1;

	si ((datos = (int *) malloc (tamaño de (int))) == NULL)
		devolver 1;
	*datos = 998;
	if (cola_encola(&cola, datos) != 0)
		devolver 1;
	imprimir_cola(&cola);

	si ((datos = queue_peek(&queue)) != NULL)
		fprintf(stdout, "\nMirando el elemento principal [valor]=%03d\n", *datos);
	más
		fprintf(stdout, "\nMirando el elemento principal [valor]=NULL\n");
	imprimir_cola(&cola);

	fprintf(stdout, "Desencolando todos los elementos\n");
	while (tamaño_cola(&cola) > 0) {
		if (queue_dequeue(&queue, (void **)&data) == 0)
			gratis (datos);
	}
	si ((datos = queue_peek(&queue)) != NULL)
		fprintf(stdout, "\nMirando un [valor]=%03d\n vacío", *datos);
	más
		fprintf(stdout, "\nMirando un [valor]=NULL\n" vacío);
	imprimir_cola(&cola);

	fprintf(stdout, "\nDestruyendo la cola\n");
	queue_destroy(&cola);
	devolver 0;
}

// combinacionesBinarias.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
using namespace std;
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include<cstring>
#include <ctype.h>

////////////////////////////prototipos/////////////////////////////////////////////
int calcular_combinaciones_con_n_bits(int cantidad_bit);
void imprimirMatriz(int** matriz, int filas, int columnas, string cadena);
int** crearMatriz(int filas, int columnas);



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char* argv[]) {
	int columna;
	int verificador = 1;
	printf("aplicacion  creada y programada por Helio Rivera Aracena.\n");
	printf("aplicacion que permite mostrar todas las combinaciones posibles con hasta 15 bits.\n");
	
	int valor;
	while (verificador) {

		printf("ingrese cantidad de bits:\n");
		scanf_s("%d", &columna);
		
		if (columna <= 15) {
			int cantidad_combinaciones = (int)pow(2, columna);

			int** matriz = crearMatriz(cantidad_combinaciones, columna);
			//imprimirMatriz(matriz, cantidad_combinaciones, columna, "matriz de inicio");

			//calcular_combinaciones_con_n_bits(columna);
		}
		else {
			printf("el valor ingresado debe ser menor o igual a 15 bits");
		}
		printf("\npresione 0 para salir cualquier otro numero para continuar : \n");

		valor = scanf_s("%d", &verificador);

		if (valor == 0) {
			printf("\nvalor ingresado no valido. el programa abortara \n");
			return -1;
		}
		
	}

	printf("\nha salido de la aplicacion. \n");

	
	return 0;
}

int** crearMatriz(int filas , int columnas ) {
	int** matriz = NULL;

	printf("con %d bits se pueden generar %d combinaciones diferentes \n", columnas, filas);

	matriz = (int**)malloc(filas * sizeof(int*));

	if (matriz == NULL) {
		printf("No se pudo reservar memoria\n");
		return 0;
	}

	for (int i = 0; i < filas; i++) {
		matriz[i] = (int*)malloc(columnas * sizeof(int));
		if (matriz[i] == NULL) {
			printf("No se pudo reservar memoria\n");
			return 0;
		}
	}

	for (int i = 0; i < filas; ++i) {
		for (int j = 0; j < columnas; j = j + 1) {
			matriz[i][j] = 1;
		}
	}

	return matriz;
}

void imprimirMatriz(int ** matriz, int filas, int columnas , string cadena) {

	printf("imprimiendo %s : \n", cadena);
	for (int i = 0; i < filas; ++i) {
		for (int j = 0; j < columnas; j = j + 1) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	} 
}

int calcular_combinaciones_con_n_bits(int cantidad_bit) {

	int** matriz = NULL;
	
	int cantidad_combinaciones = (int) pow(2, cantidad_bit);

	printf("con %d bits se pueden generar %d combinaciones diferentes \n",cantidad_bit,cantidad_combinaciones);

	matriz = (int**)malloc(cantidad_combinaciones * sizeof(int*));

	//inicializar_matriz(arreglo_de_combinaciones, cantidad_combinaciones, cantidad_bit);

	//rellenar_matriz_con_ceros(arreglo_de_combinaciones, cantidad_combinaciones, cantidad_bit);

	//mostrar_la_matriz(arreglo_de_combinaciones, cantidad_combinaciones, cantidad_bit);

	return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln

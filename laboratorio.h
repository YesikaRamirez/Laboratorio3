#ifndef LABORATORIO_H
		#define LABORATORIO_H
		#define MAX_FILE_SIZE 2000
		#define COL_MAX 100		//Columnas Maximas//
		#include <stdio.h> 
		#include <stdlib.h>
		#include <string.h>
		
		void descrip(int argc, char *argv[]);
		void autor(int argc, char *argv[]);
		void suma(float matres[][COL_MAX],float matriz1[][COL_MAX],float matriz2[][COL_MAX],int a,int b,char *argv[]);
		void resta (float matres[][COL_MAX],float matriz1[][COL_MAX],float matriz2[][COL_MAX],int a,int b,char *argv[]);
		void transpuesta (float matres[][COL_MAX],float matriz1[][COL_MAX],float matriz2[][COL_MAX],int a,int b,char *argv[]);
		void abrir(char *argv[],int *a,int *b,int *a2,int *b2,int argumento);
		void extraermatrices1(float matriz1csv[][COL_MAX],int argc, char *argv[],int argumento);
		void extraermatrices2(float matriz2csv[][COL_MAX],int argc, char *argv[],int argumento);
		void asignandomatriz(float matrizcsv[][COL_MAX],float matrizcsv1[][COL_MAX],float matriz1[][COL_MAX],float matriz2[][COL_MAX],int b,int a,int a2,int b2,int argumento);
		void guardarmatrices(float matres[][COL_MAX], char *argv[],int a,int b,int argumento);
		
#endif
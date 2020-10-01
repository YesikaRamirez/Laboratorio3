/* Laboratorio 3
	autores: Yesica Ramirez, Ashley Romero 
	Materia: Alse
	Profesor: Marco Ortiz
	Grupo 5
	Fecha: 1 de octubre de 2020 
*/

#include "laboratorio.h"

void main(int argc, char *argv[])
{
	if(strcmp("-a",argv[1])==0)
	{
		printf("el usuario sube dos matrices tipo csv \n\n");
	
		argumento=3;
		
		extraermatrices(matrizcsv,argv,&a,&b,argumento);
		extraermatrices2(matrizcsv1,argv,argumento);
		abrir(argv,&a,&b,&a2,&b2,argumento);
		asignandomatriz(matrizcsv,matrizcsv1,matriz1,matriz2,b,a,a2,b2,argumento);				
				
				
		argumento=4;
		extraermatrices(matrizcsv,argv,&a,&b,argumento);
		extraermatrices2(matrizcsv1,argv,argumento);
		melo12(argv,&a,&b,&a2,&b2,argumento);
		asignandomatriz(matrizcsv,matrizcsv1,matriz1,matriz2,b,a,a2,b2,argumento);	
	
		if(a==a2 && b==b2)
		{
			suma(matres,matriz1,matriz2,a,b,argv);
			imprimematriz(matres,a,b);
			printf("\n\t la matrices tienen el mismo tamaño \n\n");
		}
		else
		{
			printf("\n\t la matrices no tienen el mismo tamaño asi que no se pueden sumar \n\n");
		}
		if(strcmp("-a",argv[5])==0)
		{
			argumento=6;
			guardarmatrices(matres,argv,a,b,argumento);
		}	
	}
	if(strcmp("-r",argv[1])==0)
	{
		printf("el usuario sube dos matrices tipo csv \n\n");
	
		argumento=3;
		
		extraermatrices(matrizcsv,argv,&a,&b,argumento);
		extraermatrices2(matrizcsv1,argv,argumento);
		abrir(argv,&a,&b,&a2,&b2,argumento);
		asignandomatriz(matrizcsv,matrizcsv1,matriz1,matriz2,b,a,a2,b2,argumento);				
				
				
		argumento=4;
		extraermatrices(matrizcsv,argv,&a,&b,argumento);
		extraermatrices2(matrizcsv1,argv,argumento);
		melo12(argv,&a,&b,&a2,&b2,argumento);
		asignandomatriz(matrizcsv,matrizcsv1,matriz1,matriz2,b,a,a2,b2,argumento);	
	
		if(a==a2 && b==b2)
		{
			resta(matres,matriz1,matriz2,a,b,argv);
			imprimematriz(matres,a,b);
			printf("\n\t la matrices tienen el mismo tamaño \n\n");
		}
		else
		{
			printf("\n\t la matrices no tienen el mismo tamaño asi que no se pueden sumar \n\n");
		}
		if(strcmp("-s",argv[5])==0)
		{
			argumento=6;
			guardarmatrices(matres,argv,a,b,argumento);
		}	
	}
	
	if(strcmp("-t",argv[1])==0)
	{
		printf("el usuario sube dos matrices tipo csv \n\n");
	
		argumento=3;
		
		extraermatrices(matrizcsv,argv,&a,&b,argumento);
		extraermatrices2(matrizcsv1,argv,argumento);
		abrir(argv,&a,&b,&a2,&b2,argumento);
		asignandomatriz(matrizcsv,matrizcsv1,matriz1,matriz2,b,a,a2,b2,argumento);				
				
				
		argumento=4;
		extraermatrices(matrizcsv,argv,&a,&b,argumento);
		extraermatrices2(matrizcsv1,argv,argumento);
		melo12(argv,&a,&b,&a2,&b2,argumento);
		asignandomatriz(matrizcsv,matrizcsv1,matriz1,matriz2,b,a,a2,b2,argumento);	
	
		if(a==a2 && b==b2)
		{
			resta(matres,matriz1,matriz2,a,b,argv);
			imprimematriz(matres,a,b);
			printf("\n\t la matrices tienen el mismo tamaño \n\n");
		}
		else
		{
			printf("\n\t la matrices no tienen el mismo tamaño asi que no se pueden sumar \n\n");
		}
		if(strcmp("-t",argv[5])==0)
		{
			argumento=6;
			guardarmatrices(matres,argv,a,b,argumento);
		}	
	}
	if (strcmp("--help",argv[3]==0)
	{
		descrip(argv)
		
	}
	if (strcmp("-v",argv[4]==0)
	{
		autor(argv)
	}
 }
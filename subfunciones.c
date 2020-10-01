#include "laboratorio.h"

void extraermatrices(float matriz1csv[][COL_MAX],char *argv[],int argumento) //Extraer MATRICES
{
	long int posicion=0,s=0;
	int cont=0,contf=0,contc=0,colt=0,cont1=0,c=0;
	float matris1[contf];
	unsigned char vector[posicion][posicion],vector2[posicion],mat[colt];
	
	FILE *p=fopen(argv[argumento],"r");
	fseek(p, 0, SEEK_END);  
	posicion =ftell(p);				// posicion del archivo p
	cont=posicion+1; 
	fclose(p);
	
	FILE *f=fopen(argv[argumento],"r");
	fread(vector,sizeof(char),cont,f);	//tamaño leido
	
	for(int j=0;j<posicion;j++)
		{
			vector2[j]=vector[1][j];	//empiesa en 1
		}
	
	for(int j=0;j<posicion;j++)
		{
			if(vector2[j]==';' || vector2[j]=='\n')
			{
				contf=contf+1;				//contador de datos
			}
			if(vector2[j]=='\r')
			{
				contc=contc+1;			// numero de filas
			}
			colt=colt+1;				// columnas totales
		}
	
	for(int w=0;w<=colt;w++)
	{
		if(vector2[w]!=';' && vector2[w] != '\n')
		{
			mat[cont1]=vector2[w];				//valores a mat
			cont1=cont1+1;
		}
		if(vector2[w]==';' || vector2[w] == '\n')
		{
				
			matris1[c]=atof(mat);			//combierte cadena en valor numerico
				c=c+1;
			for(int u=0;u<=cont1;u++)
			{
				mat[u]='\0';
			}
			cont1=0;
		}			
		
	}
	for(int i=0;i<contc;i++)
	{
		for(int j=0;j<contf/contc;j++)
		{
			matriz1csv[i][j]=matris1[s];
			s=s+1;
		}
	}	
	
	fclose(f);
}

void descrip(int argc, char *argv[])
{
	if(strcmp("--help",argv[3])==0)
	{
		FILE *file_descriptor1;
		char buffer[MAX_FILE_SIZE];
		size_t result = 0;
		long file_size = 0;
		
		file_descriptor1 = fopen ("Help.txt", "r");
		fseek (file_descriptor1, 0, SEEK_END);
		file_size = ftell(file_descriptor1);
		rewind(file_descriptor1);
		
		//copy the file into the buffer//
		
		result = fread (buffer, 1, file_size, file_descriptor1);
		if (result != file_size)
		{
			fputs("Error de lectura de buffers",stderr);
			
		}
		//close file
		fclose(file_descriptor1);
		buffer[file_size]='\0';
		printf("\n\nEl archivo es: \n\n%s",buffer);
	}
}


void autor(int argc, char *argv[])
{
	if(strcmp("-v",argv[4])==0)
	{
		FILE *file_descriptor1;
		char buffer[MAX_FILE_SIZE];
		size_t result = 0;
		long file_size = 0;
		
		file_descriptor1 = fopen ("Informacion.txt", "r");
		fseek (file_descriptor1, 0, SEEK_END);
		file_size = ftell(file_descriptor1);
		rewind(file_descriptor1);
		
		//copy the file into the buffer//
		
		result = fread (buffer, 1, file_size, file_descriptor1);
		if (result != file_size)
		{
			fputs("Error de lectura de buffers",stderr);
			
		}
		//close file
		fclose(file_descriptor1);
		buffer[file_size]='\0';
		printf("\n\nEl archivo es: \n\n%s",buffer);
	}
}


void suma(float matres[][COL_MAX],float matriz1[][COL_MAX],float matriz2[][COL_MAX],int a,int b,char *argv[])

{
	int i=0,j=0;
		if(strcmp("-a",argv[3])==0)   //sumar
		{
			for(i=0;i<a;i++)
				{
					for(j=0;j<b;j++)
					{
						matres[i][j]=matriz1[i][j]+matriz2[i][j];
					}
				}
		}
}

void resta (float matres[][COL_MAX],float matriz1[][COL_MAX],float matriz2[][COL_MAX],int a,int b,char *argv[])

{
	int i=0,j=0;
		if(strcmp("-r",argv[4])==0)//restar
		{
			for(i=0;i<a;i++)
				{
					for(j=0;j<b;j++)
					{
						matres[i][j]=matriz1[i][j]-matriz2[i][j];
					}
				}
		}
}
	
void transpuesta (float matres[][COL_MAX],float matriz1[][COL_MAX],float matriz2[][COL_MAX],int a,int b,char *argv[])
{	
	if(strcmp("-t",argv[5])==0)//transpuesta
	{
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<b;j++)
			{
				printf("Transpuesto de la matriz #1\n");
				printf("%f",matriz1[j][i]);
				printf("Transpuesto de la matriz #2\n");
				printf("%f",matriz2[j][i]);
			}
		}
	}
}


void abrir(char *argv[],int *a,int *b,int *a2,int *b2,int argumento)
{
	if(argumento==3)
	{	
		long int posicion=0,cont=0,s=0,colt=0,contf=0,contc=0;
		float matris1[posicion];
		unsigned char vector[posicion][posicion],vector2[posicion];
		char mat[posicion];
		
		FILE *p;
		p=fopen(argv[argumento],"r");
		if(p==NULL)
		{
			printf("\n\t el archivo no se a podido abrir \n\n");
			exit(1);
		}
		
		fseek(p, 0, SEEK_END);  
		posicion=ftell(p);
		cont=posicion+1;
		rewind(p);
		fclose(p);
		
		FILE *f;
		f=fopen(argv[argumento],"r");
		fread(vector,sizeof(char),cont,f);
		printf("\n\n");
		
		for(int j=0;j<posicion;j++)
		{
			//printf("%c",vector[1][j]);
			vector2[j]=vector[1][j];
		}
		
		for(int j=0;j<posicion;j++)
		{
			if(vector2[j]==';' || vector2[j]=='\n'){
				contf=contf+1;
			}
			if(vector2[j]=='\n'){
				contc=contc+1;
			}
			colt=colt+1;	
		}

		*b=contf/contc;
		*a=contc;
	}
	if(argumento==4)
	{
		long int posicion=0,cont=0,s=0,colt=0,contf=0,contc=0;
		float matris1[posicion];
		unsigned char vector[posicion][posicion],vector2[posicion];
		char mat[posicion];
		FILE *p;
		fopen(argv[argumento],"r");
		if(p==NULL)
		{
			printf("\n\t el archivo no se a podido abrir \n\n");
			exit(1);
		}
		fseek(p, 0, SEEK_END);  
		posicion=ftell(p);
		cont=posicion+1;
		rewind(p);
		fclose(p);
		FILE *f;
		fopen(argv[3],"r");
		fread(vector,sizeof(char),cont,f);
		printf("\n\n");
		
		for(int j=0;j<posicion;j++)
		{
			//printf("%c",vector[1][j]);
			vector2[j]=vector[1][j];
		}
		
		for(int j=0;j<posicion;j++)
		{
			if(vector2[j]==';' || vector2[j]=='\n'){
				contf=contf+1;
			}
			if(vector2[j]=='\n'){
				contc=contc+1;
			}
			colt=colt+1;	
		}

		*b2=contf/contc;
		*a2=contc;
	}
}

void asignandomatriz(float matrizcsv[][COL_MAX],float matrizcsv1[][COL_MAX],float matriz1[][COL_MAX],float matriz2[][COL_MAX],int b,int a,int a2,int b2,int argumento)
{
	if(argumento==3)
	{
		for(int e=0;e<a;e++)
		{
			for(int r=0;r<b;r++)
			{
				matriz1[e][r]=matrizcsv[e][r];
			}
		}
		for(int e=0;e<2;e++)
		{
			matriz1[0][e]=matrizcsv1[0][e];
		}
	}

	if(argumento==4)
	{
		for(int e=0;e<a2;e++)
		{
			for(int r=0;r<b2;r++)
			{
				matriz2[e][r]=matrizcsv[e][r];
			}
		}
		for(int e=0;e<2;e++)
		{
			matriz2[0][e]=matrizcsv1[0][e];
		}
	}
}

void guardarmatrices(float matres[][COL_MAX], char *argv[],int a,int b,int argumento)
{
	FILE *fp;
	fp=fopen(argv[4],"w");
	if(fp==NULL)
	{
		printf("\n\t el archivo no se creo \n\n");
	}
	char linea[80];
	for(int e=0;e<a;e++)
	{
		linea[0]='\0';
		for(int r=0;r<b;r++)
		{
			char buffer[1000];
			sprintf(buffer,"%f;",matres[e][r]);
			strcat(linea,buffer);
		}
		int len;
		len=strlen(linea);
		linea[len-1]='\n';
		fputs(linea,fp);
	}
	printf("\n\t se guardo con exito el resultado \n\n");
	fclose(fp);
}
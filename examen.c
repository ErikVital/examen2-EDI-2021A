#include <stdio.h>

#define E 3
#define M 4

void captura(int clave[E], char nombre[50], float estaturaSueldo[E][M]);
void buscaValor(int arr[E][M], int *ma, int *posDos);
int Bubuja(int A[E][M]);


int main()
{
	int empleado;
	int clave[E];
	char nombre[50]; //
	float estaturaSueldo[E][M];
	int mayor=0;
	buscaValor(estaturaSueldo, &mayor, &posicionMayor);
	empleado=Bubuja(estaturaSueldo);
	
	captura(clave, nombre, estaturaSueldo);
	imprime(clave, nombre, estaturaSueldo;)
	
	return 0;
}

void captura(int clave[E], char nombre[50], float estaturaSueldo[E][M])
{
	int i;
	int j=0;
	
	for(i=0; i<E; i++)
	{
		printf("Clave del alumno %d", i);
		scanf("%d", &clave[i]);
		
		printf("Nombre del alumno %d", i);
		scanf("%")
	}
}



void buscaValor(int arr[E][M], int *ma, int *posDos)
{
	int i;
	
	for(i=0; i<N; i++)
	{
		if(*ma<arr[0][i])
		{
			*ma=arr[0][i];
			*posDos=i;
		}
	}
}

int Bubuja(int A[E][M])
{
    int aux, p, cont, pos;

    //for(p=1;p<N;p++)
   // {
        for(cont=0;cont<N;cont++)
        {
            if(A[1][cont]>A[1][cont+1])
            {
                aux=A[1][cont];
                A[1][cont]=A[1][cont+1];
                A[1][cont+1]=aux;
                cont=p;
            }
        }
   // }
   
   return p;
}

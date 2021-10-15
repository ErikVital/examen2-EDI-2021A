#include <stdio.h>

#define E 3
#define M 4

void captura(int clave[E], char nombre[50][E], float estaturaSueldo[E][M]);
void imprime(int clave[E], char nombre[50][E], float estaturaSueldo[E][M], int empleado);
void buscaValor(int arr[E][M], int *ma, int *posDos);
int Bubuja(int A[E][M]);


int main()
{
	int mayor=0;
	int posicionMayor;
	int empleado;
	int clave[E];
	char nombre[50][E]; //
	float estaturaSueldo[E][M];
	buscaValor(estaturaSueldo, &mayor, &posicionMayor);
	empleado=Bubuja(estaturaSueldo);
	
	captura(clave, nombre, estaturaSueldo);
	imprime(clave, nombre, estaturaSueldo, empleado);
	
	return 0;
}

void captura(int clave[E], char nombre[50][E], float estaturaSueldo[E][M])
{
	int i;
	int j=0;
	
	for(i=0; i<E; i++)
	{
		printf("Clave del alumno %d: ", i);
		scanf("%d", &clave[i]);
		
		printf("Nombre del alumno %d: ", i);
		scanf("%s", &nombre[i]);
		
		printf("Estatura y Sueldo del alumno %d: ", i);
		scanf("%f", &estaturaSueldo[i][j]);
		scanf("%f", &estaturaSueldo[i][j+1]);
	}
}

void imprime(int clave[E], char nombre[50][E], float estaturaSueldo[E][M], int empleado)
{
	int i;
	int j=0;
	printf("Primero el de mayor sueldo\n\n");
	printf("Clave  Nombre  Estatura  Sueldo\n");
	printf("%d %s %.2f %.2f \n", clave[empleado], nombre[empleado], estaturaSueldo[empleado][j], estaturaSueldo[empleado][j+1]);
	
	for(i=0; i<E; i++)
	{
		printf("%d  ", clave[i]);
		
		printf("%s  ", nombre[i]);
		
		printf("%f  ", estaturaSueldo[i][j]);
		printf("%f  ", estaturaSueldo[i][j+1]);
		printf("\n");
	}
}

void buscaValor(int arr[E][M], int *ma, int *posDos)
{
	int i;
	
	for(i=0; i<E; i++)
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
        for(cont=0;cont<E;cont++)
        {
            if(A[1][cont]<A[1][cont+1])
            {
                aux=A[1][cont];
                A[1][cont]=A[1][cont+1];
                A[1][cont+1]=aux;
                pos=cont;
            }
        }
   // }
   
   return pos;
}


//Vital Muñoz Erik

#include <stdio.h>

#define E 3 //Empleados
#define M 4

void captura(int clave[E], char nombre[E][50], float estaturaSueldo[E][M]);
void imprime(int clave[E], char nombre[E][50], float estaturaSueldo[E][M], int empleado);
void buscaValor(float arr[E][M], float *ma, int *posDos);
int Bubuja(float A[E][M]);


int main()
{
	float mayor=0;
	int posicionMayor;
	int empleado;
	int clave[E];
	char nombre[E][50]; //
	float estaturaSueldo[E][M];
	empleado=Bubuja(estaturaSueldo);

	captura(clave, nombre, estaturaSueldo);
	buscaValor(estaturaSueldo, &mayor, &posicionMayor);
	printf("El mayor valor se encuentra en la posicion [%d] y es %.2f\n\n", posicionMayor, mayor);
	imprime(clave, nombre, estaturaSueldo, empleado);

	return 0;
}

void captura(int clave[E], char nombre[E][50], float estaturaSueldo[E][M])
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

void imprime(int clave[E], char nombre[E][50], float estaturaSueldo[E][M], int empleado)
{
	int i;
	int j=0;
	printf("Primero el de mayor sueldo, luego lista completa\n\n");
	printf("Clave  Nombre  Estatura  Sueldo\n");
	printf("%d  %s  %.2f  %.2f \n\n", clave[empleado], nombre[empleado], estaturaSueldo[empleado][j], estaturaSueldo[empleado][j+1]);

	for(i=0; i<E; i++)
	{
		printf("%d  ", clave[i]);

		printf("%s  ", nombre[i]);

		printf("%f  ", estaturaSueldo[i][j]);
		printf("%f  ", estaturaSueldo[i][j+1]);
		printf("\n");
	}
}

void buscaValor(float estaturaSueldo[E][M], float *ma, int *posDos)
{
	int i;

	for(i=0; i<E; i++)
	{
		if(*ma<estaturaSueldo[0][i])
		{
			*ma=estaturaSueldo[0][i];
			*posDos=i;
		}
	}
}

int Bubuja(float A[E][M])
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

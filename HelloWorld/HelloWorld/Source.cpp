#include <stdio.h>


int potencia(int a, int b);

int main(){

	int a=0,b=0;

	printf("Hello World");

	printf("Ingrese 2 numeros\n");

	printf("Ingrese el primer número\n");

	scanf("%d",&a);
	printf("Ingrese el primer número\n");

	scanf("%d",&b);
	printf("La suma de los numeros es %d",a+b);


	//Parte de la division

	printf("\nDivision \n");

	printf("Ingrese 2 numeros\n");

	printf("Ingrese el dividendo\n");

	scanf("%d", &a);

	printf("Ingrese el divisor\n");

	scanf("%d", &b);

	while (b == 0) {

		printf("Error: El divisor no puede ser cero");

		printf("Ingrese el divisor\n");

		scanf("%d", &b);

	}
 
	printf("La division de los numeros es %d", a/b);


	printf("\n La multiplicacion de los numeros es: %d",a*b);

	printf("\nIngrese el primer número para la potencia\n");

	scanf("%d",&a);
	printf("Ingrese la potencia\n");

	scanf("%d",&b);
	int re=potencia(a,b);

	printf("La Potencia es : %d", re);

	return 0;

	
}

int potencia(int a,int b){

int i=0,resultado=a;


	for(i=0;i<b-1;i++){

	resultado=resultado*a;

	}

return resultado;


}
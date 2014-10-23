#include <stdio.h>

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
	printf("Division \n");
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
	printf("La division de los numeros es %d", a / b);
	return 0;
	
}

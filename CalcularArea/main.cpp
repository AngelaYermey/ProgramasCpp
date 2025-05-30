#include <stdio.h>
#include <conio.h>
#include <math.h> 
#define PI 3.1416
//Calcular el area de las figuras (Cuadrado, rectangulo y circulo)

int main (){//inicio del progrma
	
	float alto, area, lado, radio, largo;//variables de entrada
	int op; //variables opción

	printf("Menu \n"),
	printf("\n");

	printf("Elige una opcion:\n");
	printf("1.Cuadrado\n");
	printf("2.Rctangulo\n");
	printf("3.Circunferencia\n");

	scanf("%i",&op);

	if(op>0 && op <=3){

	switch (op){//inicio del esquema switch
	
		case 1:
			printf("Ingrese un lado del caudrado\n");
			scanf("%f",&lado);
			if(lado>0){
				area= lado*lado;
				printf("El area del cuadrado es: %0.2f \n",area);
			}else{
				printf("Datos erroneos\n");
			}
			break;
		case 2:
			printf("Ingrese el largo del rectangulo\n");
			scanf("%f",&largo);
			printf("ingrese la altura del rectangulo\n");
			scanf("%f",&alto);
			if(largo>0 && alto>0){
				area = largo * alto;
				printf("El area del rectangulo es: %0.2f \n",area);
			}else{
				printf("Datos erroneos");
			}
			break;
		case 3:
			printf("Ingrese el radio de la circunferencia\n");
			scanf("%f",&radio);
			if(radio>0){
				area=PI*radio*radio;
				printf("El area de la circunferencia es: %0.2f\n",area);
			}else{
				printf("Datos incorrectos\n");
			}
			break;
	}//fin del esquema
	}else{
		printf("Error\n");
	}
	getch();
	return 0;
}//fin del programa0

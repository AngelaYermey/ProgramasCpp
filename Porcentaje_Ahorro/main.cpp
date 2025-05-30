#include <stdio.h>     
#include <stdlib.h>
#include <conio.h>
#include <math.h>

/* Determinar cuanto ahorrara una persona durante el año.  
calcular lo que el banco da a cada uno de los  "n" clientes al finalizar el año
el desembolso total del banco al finalizar el año por efecto de la entrega de los ahorros.*/

int main() {
	float cantahorro,suma=0;
	float total,interes;
	
	//inicia el repetir
	do{
		system("cls");
		printf("**Ingrese 0 cuando desee terminar.**\n");
	    printf("\nIngresa la cantidad de ahorros:\n");
	    scanf("%f",&cantahorro);//PAra lectura de ahorro
	
	    if(cantahorro>0 && cantahorro<=200){//Primera condicionen  menores que 200
		    interes=1.0+0.03;
			total=cantahorro*pow(interes,1);
			printf("El interes pagado es de: $%0.2f\n",interes);
        	printf("El banco le entregara a este cliente: $%0.2f\n",total);
	    	suma+=total;
	    	getch();
    	}
    	else{
    	if(cantahorro >200 && cantahorro<=1000){//segunda condicion mayores a 200 y menores que 1000
    		interes=1.0+0.06;
    		total=cantahorro*pow(interes,1);
    		printf("El interes pagado es de: $%0.2f\n",interes);
    		printf("El banco le entregara a este cliente: $%0.2f\n",total);
    		suma+=total;
    		getch();
        }
        else{
        if(cantahorro>1000){//tercera condicion mayores que 1000
    		interes=1.0+0.07;
    		total=cantahorro*pow(interes,1);
    		printf("El interes pagado es de: $%0.2f\n",interes);
    		printf("El banco le entregara a este cliente: $%0.2f\n",total);
    	    suma+=total;
    	    getch();
        }
        else{
        if(cantahorro<0){//Para cuando es error, vuelve al repetir
            printf("Error. Los datos son incorrectos.\n");
			getch();
			}
		    }
        }
    	}
	}
	while(cantahorro != 0);//que se detenga en caso de ingresar 0

	printf("\nEl desembolso final del banco es de: $%0.2f\n",suma);//suma de todos los totales	
	
	getch();
	system("cls");
	return 0;
}

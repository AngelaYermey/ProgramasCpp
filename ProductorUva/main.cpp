#include <stdio.h>
#include <stdlib.h>

/* determinar cuánto recibirá un productor por la uva que entrega en un embarque */

int main() {

system("color fD");
float kls,precio1,preciof;
int tipo;	

printf("Ingrese la cantidad de kilos de uvas \n"); // kilos de uvas 
scanf("%f",&kls);
printf("TIPO DE UVAS\n"); // clasificacion de uvas tipo A y B
printf("1. A\n");
printf("2. B\n");
scanf("%d",&tipo);
	
	//Validación
	if (kls <= 0  || tipo<=0){
		system("color f4");
		printf("ERORR... vuelva a ingresar sus datos\n");// valor invalido
	}else if (tipo==1){ // operacion para el tipo A
		precio1= (2.75+0.80);
	    preciof = (precio1*kls);
		printf("\nTipo A recibe: 80 centimos por kilo de uva\n");
		printf("\nPrecio de uva = %0.2f\n",precio1);
		printf ("\nLa gancia obtenida es de: %.2f\n",preciof);		
	}else if (tipo==2){// operacion para el tipo A
		precio1= (2.75+0.40);
	    preciof = (precio1*kls);
		printf("\nTipo B recibe: 40 centimos por kilo de uva\n");
		printf("Precio de uva = %0.2f\n",precio1);
		printf ("\nLa gancia obtenida es de: %.2f\n",preciof);				
	}else if (tipo >=3){
		system("color f4");
		printf ("ERROR...VUELVA A INTENTARLO\n");
	}
	
	system("pause");
	system("cls");//limpiar pantalla
	return 0;
}//fin de algoritmo
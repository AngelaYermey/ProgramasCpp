#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Aceleracion movil usando if y switch 

int main(){
	
	int opc,velo, tiempo, velocf, veloci, final; //variables de entradas
	float total1, total2;	//variables de salida
	
	printf("Escoga una opcion\n");
	printf("1.Parte del reposo\n");
	printf("2.No parte del reposo\n");
	scanf("%d", &opc );
	if (opc<1 ||  opc>2){	//validacion de opcion
		printf("ERROR, Ingrese los datos nuevamente\n");
	}else{
		if(opc==1){	//si parte del reposo
			printf("Ingrese la velocidad\n");
			scanf("%d", &velo);
			printf("Ingrese el tiempo\n");
			scanf("%d", &tiempo);
			if (tiempo<0){
				printf("Error, el tiempo tiene que ser positivo\n");
			}else{
				total1=velo/tiempo;
				final=1;
			}
		}else{
			if(opc==2){//si No parte desde el reposo 
				printf("Ingrese la velocidad final\n");
				scanf("%d", &velocf);
				printf("Ingrese la velocidad inicial\n");
				scanf("%d", &veloci);
				printf("Ingrese el tiempo\n");
				scanf("%d", &tiempo);
				if (tiempo<0){
					printf("Error, tiempo tiene que ser positivo\n");
				}else{
					total2=(velocf-veloci)/tiempo;
					final=2;
				}
			}
		}
		switch(final){
			case 1:
				printf("La aceleracion del movil es: %.2f\n", total1);	//primera impresion de la opcion 1
			break;	
			case 2:
				printf("La aceleracion del movil es: %.2f\n", total2);	//segunda impresion de la opcion 2
			break;
		}
	}
	
	
	system("pause");
	system("cls");
	return 0;
}

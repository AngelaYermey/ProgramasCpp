#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Emulador de caculadora */

int main() {
	
int valor;
float num1, num2, result;
		
//Ingresar un numero para proceder hacer las operaciones 

	printf("MENU\n");	
	printf("1. SUMA\n");
	printf("2. RESTA\n");
	printf("3. MULTIPLICACION \n");
	printf("4. DIVISION \n");
	printf("5. RAIZ 1 \n");
	printf("6. RAIZ 2 \n");
	printf("7. POTENCIA 1 \n");
	printf("8. POTENCIA 2 \n");
	printf("ESCOJA LA OPERACION MATEMATICA\n");
	scanf("%d",& valor);
	
	
if (valor <= 0 || valor >=9){
	printf("..Error..Esta operación no se puede realizar\n");	
     //suma
}else if (valor==1){
	printf("\n Escriba el primer numero\n");
	scanf("%f",&num1);
	printf("Escriba el segundo numero\n");
	scanf("%f",&num2);
	result =  num1 + num2 ;
 	printf("EL RESULTADO DE LA SUMA ES:  %.2f  \n",result );	
     //Resta		
	}else{
		if (valor==2){
		 printf("\n Escriba el primer numero\n");
	     scanf("%f",&num1);
	     printf("Escriba el segundo numero\n");
	     scanf("%f",&num2);
	     result = num1-num2;
	     printf("EL RESULTADO DE LA RESTA ES:  %.2f  \n",result );
         //Multiplicacion 			
		}else{
			if (valor==3){
			printf("\n Escriba el primer numero\n");
	        scanf("%f",&num1);
         	printf("Escriba el segundo numero\n");
        	scanf("%f",&num2);
			result = num1 * num2;
            printf("EL RESULTADO DE LA MULTIPLICACION ES:  %.2f \n",result );
             //Division				
			}else{
				if (valor==4){
					printf("\n Escriba el primer numero que desea dividir\n");
              	    scanf("%f",&num1);
             	    printf("Escriba el segundo numero\n");
             	    scanf("%f",&num2);
             	    if (num2 <= 0){
             	    	printf("Imposible dividir\n");
					 }else if (result = num1/num2){
					 	printf("EL RESULTADO DE LA DIVISION ES:  %.2f  \n",result );
					 }
                       //Raiz del num1			 
				}else{
					if(valor==5){
						printf("\n Escriba un numero \n");
              	        scanf("%f",&num1);
              	        if (num1 < 0){
						printf("Imposible realizar raíz cuadrada de un número negativo\n");
						}else if (result = sqrt (num1)) {
						printf("EL RESULTADO DE LA RAIZ 1 ES:  %.2f  \n",result);
						}
					}else{
                        //Raiz del num2 						
						if(valor==6){
							printf(" Escriba un numero\n");
	                        scanf("%f",&num2);
							if  (num2 < 0) {
							printf ("Los valores negativos no pueden tener raiz cuadrada");	
							}else if (result = sqrt(num2)) {
							printf("EL RESULTADO DE LA RAIZ 2 ES:  %.2f  \n",result ); 
						}	
                            //Potencia del num1 						
						}else{
							if(valor==7){
								printf(" Ingrese un numero\n");
                       	        scanf("%f",&num1);
                     	        result = pow(num1,2);
                     	        printf("EL RESULTADO DE LA POTENCIA 1 ES:  %.2f  \n",result );
							}else{
                                   //Potnencia del num2 								
								if(valor==8){
									printf("Ingrese un numero\n");
                                 	scanf("%f",&num2);
	                                result = pow(num2,2);
	 			                    printf("EL RESULTADO DE LA POTENCIA 2 ES:  %.2f \n",result );
								}
							}
						}
					}					
				}	
			}
		}
	}	
	//Fin de algoritmo 
	system ("pause");
	return 0;
}
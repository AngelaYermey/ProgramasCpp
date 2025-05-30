#include <stdio.h>
#include <stdlib.h>

int main() {
    float monto, b, gg, suma;
    int op, op2, ve, cant;
    float fd;
    float plani;

    plani = 0;
    suma = 0;
    fd = 0;
    cant = 0;

    system("color f3");

    do {
        cant = cant + 1;
        ve = 1;
        // la varible v es un contador que cuenta la cantidad de depositos que hace el cliente  

        do {
            system("color f3");

            do {
                printf("Cuanto es el monto del deposito %d del cliente #%d\n", ve, cant);
                scanf("%f", &monto);
                // la variable monto es para poder ingresar la cantidad de dinero que va a depositar el cliente 
                if (monto <= 0) {
                    system("color f4");
                    printf("Error, ingrese los datos nuevamente\n");
                }
            } while (monto <= 0);

            do {
                printf("Ingrese una opción \n");
                printf("	1. Continuar con más depósitos del cliente %d\n", cant);
                printf("	2. Finalizar depósito del cliente %d\n", cant);
                scanf("%d", &op);
                printf("-----------------------------------------\n");
                if (op < 1 || op > 2) {
                    system("color f4");
                    printf("Error, ingrese valores válidos\n");
                }
            } while (op < 1 || op > 2);

            plani = plani + monto; // acumulador para los montos ingresados 
            printf("El total ahorrado por el cliente es %0.2f\n", plani);
            printf("-----------------------------------------\n");
            // la variable plani da el total ahorrado por el cliente a final de un año

            if (plani > 200 && plani <= 1000) {
                b = plani * 0.06;
            } else if (plani <= 200) {
                b = plani * 0.03;
            } else if (plani > 1000) {
                b = plani * 0.07;
            }

            ve = ve + 1;

        } while (op < 2);

        system("color f3");
        printf("El interés anual del cliente es %0.2f\n", b);

        gg = b + plani;

        printf("El total que recibirá el cliente es %0.2f\n", gg);
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

        suma = suma + gg;
        // la variable suma es un contador que cuanta los totales que recibira cada cliente y al final da una sola suma 
        fd = fd + 1;

        printf("\n");
        system("pause");
        system("cls"); // limpiar pantalla para continuar con otro cliente en caso del que usuario quiera ingresar otro cliente 

        do {
            system("color F6");
            // el op2 nos dice que si deseamos seguir con otro cliente o si queremos terminar ya los procesos 	
            printf("¿Desea continuar depósito para otro cliente?\n");
            printf("	1. Continuar con otro cliente\n");
            printf("	2. Finalizar\n");
            scanf("%d", &op2);
            if (op2 < 1 || op2 > 2) {
                system("color f4");
                printf("Error, vuelva a intentarlo\n");
            }
        } while (op2 < 1 || op2 > 2);

        // limpieza de variables 
        gg = 0;
        b = 0;
        plani = 0;

    } while (op2 < 2);

    printf("-----------------------------------------------------------\n");
    printf("El total que desembolsa el banco a final de año es %0.2f\n", suma);
    printf("-----------------------------------------------------------\n");
    // total del desembolso al final de año dependiendo de cada cliente ingresado

    system("pause");
    system("cls");

    return 0;
}

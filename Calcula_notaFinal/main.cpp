#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    // Variables para la cantidad de elementos (estudiantes, notas, etc.)
    int numEstudiantes, cantParciales, cantTrabajosGrupales, cantLaboratorios;
    int i, parcialIdx, trabajoIdx, laboratorioIdx;

    // Variables para almacenar las notas  y promedios
    float notaParcial, promedioParciales;
    float notaTrabajo, promedioTrabajos;
    float notaLaboratorio, promedioLaboratorios;
    float notaExamenFinal;

    // Variables para cálculo ponderado de cada categoría
    float porcParciales, porcTrabajos, porcLaboratorios, porcExamenFinal, notaFinal;

    // Variables para acumular sumas  de notas
    float sumaParciales, sumaTrabajos, sumaLaboratorios;

    // Contadores
    int contInferiorC = 0;       // Contador estudiantes con nota final inferior a C
    int contadorEstudiantes = 0; // Contador general de estudiantes 

    printf("**Programa que calcula la nota final de un estudiante**\n\n");

    // Solicitar número de estudiantes, debe ser > 0
    do
    {
        printf("Ingrese la cantidad de estudiantes\n");
        scanf("%d", &numEstudiantes);
        if (numEstudiantes <= 0)
        {
            printf("ERROR, Debe ser mayor que cero\n");
        }
    } while (numEstudiantes <= 0);

    // Notas parciales
    do
    {
        printf("Introduzca la cantidad de notas parciales\n");
        scanf("%d", &cantParciales);
        if (cantParciales <= 0)
        {
            printf("ERROR\nIngrese numero mayor que cero\n");
        }
    } while (cantParciales <= 0);

    // Trabajos grupales
    do
    {
        printf("Ingrese la cantidad de notas de los trabajos grupales\n");
        scanf("%d", &cantTrabajosGrupales);
        if (cantTrabajosGrupales <= 0)
        {
            printf("ERROR\nIngrese numero mayor a cero\n");
        }
    } while (cantTrabajosGrupales <= 0);

    // Notas de laboratorios
    do
    {
        printf("Ingrese la cantidad de notas de los laboratorios\n");
        scanf("%d", &cantLaboratorios);
        if (cantLaboratorios <= 0)
        {
            printf("ERROR\nIngrese numero mayor a cero\n");
        }
    } while (cantLaboratorios <= 0);

    // Ciclo para procesar cada estudiante
    for (i = 1; i <= numEstudiantes; i++)
    {
        contadorEstudiantes++;
        printf("Estudiante %i\n\n", contadorEstudiantes);

        // Inicializar sumas en cero para cada estudiante
        sumaParciales = 0;
        sumaTrabajos = 0;
        sumaLaboratorios = 0;

        // Ingreso y acumulación de notas parciales
        for (parcialIdx = 1; parcialIdx <= cantParciales; parcialIdx++)
        {
            printf("Ingrese la nota del parcial %d: \n", parcialIdx);
            scanf("%f", &notaParcial);
            // Validar que la nota esté entre 0 y 100
            if (notaParcial < 0 || notaParcial > 100)
            {
                printf("Nota invalida, debe estar entre 0 y 100\n");
                parcialIdx--;  // Repetir esta iteración
            }
            else
            {
                sumaParciales += notaParcial;
            }
        }
        // Calcular promedio de notas parciales
        promedioParciales = sumaParciales / cantParciales;

        system("cls");  // Limpiar pantalla 

        // Ingreso de notas de trabajos grupales
        for (trabajoIdx = 1; trabajoIdx <= cantTrabajosGrupales; trabajoIdx++)
        {
            printf("Ingrese la nota del trabajo grupal %d:\n", trabajoIdx);
            scanf("%f", &notaTrabajo);
            if (notaTrabajo < 0 || notaTrabajo > 100)
            {
                printf("Nota invalida, debe estar entre 0 y 100\n");
                trabajoIdx--;
            }
            else
            {
                sumaTrabajos += notaTrabajo;
            }
        }
        // Calcular promedio de trabajos grupales
        promedioTrabajos = sumaTrabajos / cantTrabajosGrupales;

        system("cls");

        // Ingreso de notas de laboratorios
        for (laboratorioIdx = 1; laboratorioIdx <= cantLaboratorios; laboratorioIdx++)
        {
            printf("Ingrese la nota del laboratorio %d: \n", laboratorioIdx);
            scanf("%f", &notaLaboratorio);
            if (notaLaboratorio < 0 || notaLaboratorio > 100)
            {
                printf("Nota invalida, debe estar entre 0 y 100\n");
                laboratorioIdx--;
            }
            else
            {
                sumaLaboratorios += notaLaboratorio;
            }
        }
        // Calcular promedio de notas de laboratorio
        promedioLaboratorios = sumaLaboratorios / cantLaboratorios;

        system("cls");

        // Ingreso de nota examen final 
        do
        {
            printf("Ingrese la nota del examen final\n");
            scanf("%f", &notaExamenFinal);
            if (notaExamenFinal < 0 || notaExamenFinal > 100)
            {
                printf("ERROR\nIngrese un numero entre 0 y 100\n");
            }
        } while (notaExamenFinal < 0 || notaExamenFinal > 100);

        // Calcular nota final con sus respectivos %
        porcParciales = promedioParciales * 0.30;      // 30% 
        porcTrabajos = promedioTrabajos * 0.15;        // 15% 
        porcLaboratorios = promedioLaboratorios * 0.15;// 15% 
        porcExamenFinal = notaExamenFinal * 0.40;      // 40% 

        notaFinal = porcParciales + porcTrabajos + porcLaboratorios + porcExamenFinal;

        // Mostrar los pesos calculados para cada componente
        printf("El porcentaje de las notas parciales es de: %0.2f\n", porcParciales);
        printf("El porcentaje de las notas grupales es de: %0.2f\n", porcTrabajos);
        printf("El porcentaje de las notas de laboratorio es de: %0.2f\n", porcLaboratorios);
        printf("El porcentaje del examen final es de: %0.2f\n", porcExamenFinal);

        // Clasificación final según nota final
          if (notaFinal >= 91 && notaFinal <= 100)
        {
            printf("Este estudiante obtuvo: %0.1f\n", notaFinal);
            printf("Obtuvo una A\n\n");
        }
        else if (notaFinal >= 81 && notaFinal <= 90)
        {
            printf("Este estudiante obtuvo: %0.1f\n", notaFinal);
            printf("Obtuvo una B\n\n");
        }
        else if (notaFinal >= 71 && notaFinal <= 80)
        {
            printf("Este estudiante obtuvo: %0.1f\n", notaFinal);
            printf("Obtuvo una C\n\n");
        }
        else if (notaFinal >= 61 && notaFinal <= 70)
        {
            printf("Este estudiante obtuvo: %0.1f\n", notaFinal);
            printf("Obtuvo una D\n\n");
            contInferiorC++; // Contar estudiantes con nota inferior a C
        }
        else if (notaFinal >= 0 && notaFinal <= 60)
        {
            printf("Este estudiante obtuvo: %0.1f\n", notaFinal);
            printf("Obtuvo una F\n\n");
            contInferiorC++; // Contar estudiantes con nota inferior a C
        }
        else
        {
            printf("Se ingreso un numero invalido\n");
        }
    }

    // Mostrar cantidad total de estudiantes con nota inferior a C
    printf("La cantidad de estudiantes con calificacion inferior a C es: %i\n", contInferiorC);

    getch();
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//Programa que calcula el salario semanal bruto de un empleado

int main() {
	int	HorasTrabajadas;
	float PHorasRegulares, HorasExtras, PHExtras, Total;
	
	printf ("Ingrese la cantidad de horas trabajadas semanalmente\n");
	scanf ("%d", &HorasTrabajadas);
	
	if (HorasTrabajadas>=30 && HorasTrabajadas<=35){
		//Trabajo entre 30 a 35 horas, no aplica pago por horas extras.
		//Las horas regulares se pagan a $10 cada hora.
		printf ("\n Horas trabajadas: %d", HorasTrabajadas);
		PHorasRegulares=HorasTrabajadas*10;
		printf ("\n Pago por horas regulares: $%0.2f", PHorasRegulares);
		PHExtras=0.00;
		printf ("\n Pago por horas extras: $%0.2f", PHExtras);
		Total=PHorasRegulares+PHExtras;
		printf ("\n El salario semanal del trabajador es: $%0.2f", Total);
	}else{
		if (HorasTrabajadas>35){
			//Trabajo mas de 35 horas, aplica pago por horas extras.
			//Las horas regulares se pagan a $10 cada hora.
			//Las horas extras se pagan a $15.50 cada hora.
			printf ("\n Horas trabajadas: %d", HorasTrabajadas);
			PHorasRegulares=35*10;
			printf ("\n Pago por horas regulares: $%0.2f", PHorasRegulares);
			HorasExtras=HorasTrabajadas-35;
			PHExtras=HorasExtras*15.50;
			printf ("\n Pago por horas extras: $%0.2f", PHExtras);
			Total=PHorasRegulares+PHExtras;
			printf ("\n El salario semanal del trabajador es: $%0.2f", Total);
		}else{
			if (HorasTrabajadas<30 && HorasTrabajadas>0){
				//Trabajo menos de las horas regulares que son 30 horas.
				//su sueldo es de $250.
				printf ("\n Horas trabajadas: %d ", HorasTrabajadas);
				Total=250.00;
				printf ("\n El salario semanal del trabajador es: $ %0.2f", Total);
				printf ("\n PASE A RECURSOS HUMANOS");
			}else{
				if (HorasTrabajadas <= 0 ){
					//La cantidad de horas no pueden ser negativas
					printf ("\n Datos erroneos");
				}
			}
		}
	}
	getch ();
	system ("cls");
	return 0;
}

/*  #include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define a 850
typedef struct Encabezado{
	char nombreEmpresa [20];
	char mes [10];
	int year;
}Encabezado; 
typedef struct Datos{
	char nombreEmpleado [30];
	char apellidoEmpleado [30];
	char cedula [11];
	char profesion [15];
	int horasLaboradas;
}Datos;
typedef struct Ingresos{
	float sueldo;
	int diasLaborados;
	float horasExtra;
	float totalIngresos;
}Ingresos;
 typedef struct Egresos{
 	float anticipioSueldo;
 	float prestamosIESS;
 	float impuestoRenta;
 	float IESS;
 	float totalEgresos;
 }Egresos;
 typedef struct BeneficioSocial{
 	float vacaciones;
 	float decimoTercero;
 	float decimoCuarto;
 	float fondosReserva;
 	float totalBeneficios;
 }BeneficioSocial;
 typedef struct Rol{
 	Encabezado e;
 	Ingresos i;
 	Egresos eg;
 	BeneficioSocial bs;
	 Datos d;
 	float totalRol;
 }Rol;
void gotoxy(int x, int y)
{
 HANDLE hcon;
 hcon = GetStdHandle(STD_OUTPUT_HANDLE);
 COORD dwPos;
 dwPos.X = x;
 dwPos.Y = y;
 SetConsoleCursorPosition(hcon,dwPos);
}
int main() {
	struct Rol r;
	gotoxy(1,2);printf("NOMBRE DE LA EMPRESA:");
	gotoxy(50,2);scanf("%[^\n]",&r.e.nombreEmpresa);
	gotoxy(50,3);printf("ROL DE PAGO");
	gotoxy(48,4);printf("mes:");
	gotoxy(52,4);scanf("%s",&r.e.mes);
	gotoxy(48,5);printf("A%cO:",165);
	gotoxy(52,5);scanf("%s",&r.e.year);
	gotoxy(0,6);printf("_______________________________________________________________________________________________");
gotoxy(1,7);printf("DATOS EMPLEADO");
	gotoxy(5,8);printf("APELLIDOS Y NOMBRES:");
	gotoxy(30,8);scanf("%s",&r.d.apellidoEmpleado);
	gotoxy(5,9);printf("CEDULA:");
	gotoxy(25,9);scanf("%s",&r.d.cedula);
	gotoxy(65,8);printf("PROFESION:");
	gotoxy(78,8);scanf("%s",&r.d.profesion);
	gotoxy(65,9);printf("HORAS TRABAJADAS:");
	gotoxy(90,9);scanf("%s",&r.d.horasLaboradas);
	gotoxy(1,10);printf("____________________________________________________________________________");
	gotoxy(10,11);printf("INGRESOS");
	gotoxy(70,11);printf("EGRESOS");
	gotoxy(1,12);printf("_____________________________________________________________________________");
	gotoxy(5,13);printf("SUELDO:");
	gotoxy(12,13);scanf("%f",&r.i.sueldo);
	gotoxy(5,14);printf("DIAS LABORADOS:");
	gotoxy(20,14);scanf("%i",&r.i.diasLaborados);
	gotoxy(5,15);printf("HORAS EXTRAS:");
	gotoxy(20,15);scanf("%f",&r.i.horasExtra);
		r.i.totalIngresos =  r.i.sueldo + r.i.horasExtra;
	gotoxy(5,16);printf("TOTAL INGRESOS:%.2f",r.i.totalIngresos);
	r.eg.totalEgresos = r.eg.anticipioSueldo +r.eg.prestamosIESS+r.eg.impuestoRenta+r.eg.IESS;
	gotoxy(60,20);printf("TOTAL DE EGRESOS:%.2f",r.eg.totalEgresos);
	gotoxy(1,21);printf("__________________________________");
	r.bs.vacaciones = (((r.i.sueldo + extra)*12) /24)/12;
	gotoxy(5,22);printf("VACACIONES:         %.2f",r.bs.vacaciones);
	r.bs.decimoTercero = (r.i.sueldo + extra )/12;
    gotoxy(5,23);printf("DECIMO TERCERO:%.2f",r.bs.decimoTercero);
	r.bs.decimoCuarto = 400.00 / 12 ;
	gotoxy(5,24);printf("DECIMO CUARTO: %.2f",r.bs.decimoCuarto);
	r.bs.fondosReserva = ((r.i.sueldo +extra)*8.33)/100;
	gotoxy(5,25);printf("FONDOS DE RESERVA: %.2f",r.bs.fondosReserva);
	
	r.bs.totalBeneficios = r.bs.vacaciones +r.bs.decimoTercero +r.bs.decimoCuarto + r.bs.fondosReserva;		
	gotoxy(5,28);printf("TOTAL BENEFICIOS:%.2f",r.bs.totalBeneficios);
	gotoxy(1,29);printf("___________________________________");
	float totaling=0;
	totaling = r.i.totalIngresos +r.bs.totalBeneficios;
	gotoxy(40,35);printf("TOTAL A PAGAR SIN LOS EGRESOS: %.2f",totaling);
	r.totalRol = totaling - r.eg.totalEgresos;
	gotoxy(40,40);printf ("NETO A RECIBIR: %.2f",r.totalRol);
	return 0;
}*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define a 850

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct Encabezado{
	char nombreEmpresa [70];
	char mes;
	int year;
}Encabezado; 
typedef struct Datos{
	char nombreEmpleado [30];
	char apellidoEmpleado [30];
	char cedula [11];
	char profesion [15];
	int horasLaboradas;
}Datos;
typedef struct Ingresos{
	float sueldo;
	int diasLaborados;
	float horasExtra;
	float totalIngresos;
}Ingresos;
 typedef struct Egresos{
 	float anticipioSueldo;
 	float prestamosIESS;
 	float impuestoRenta;
 	float IESS;
 	float totalEgresos;
 }Egresos;
 typedef struct BeneficioSocial{
 	float vacaciones;
 	float decimoTercero;
 	float decimoCuarto;
 	float fondosReserva;
 	float totalBeneficios;
 }BeneficioSocial;
 typedef struct Rol{
 	Encabezado e;
 	Ingresos i;
 	Datos d;
 	Egresos eg;
 	BeneficioSocial bs;
 	float totalRol;
 }Rol;
void gotoxy(int x, int y)
{
 HANDLE hcon;
 hcon = GetStdHandle(STD_OUTPUT_HANDLE);
 COORD dwPos;
 dwPos.X = x;
 dwPos.Y = y;
 SetConsoleCursorPosition(hcon,dwPos);
}
int main() {
	struct Rol r;
	float suma=0;
	gotoxy(1,2);printf("NOMBRE DE LA EMPRESA:");
	gotoxy(50,2);scanf("%[^\n]",&r.e.nombreEmpresa);
	gotoxy(47,3);printf("ROL DE PAGO");
	gotoxy(48,4);printf("MES:");
	gotoxy(52,4);scanf("%s",&r.e.mes);
	gotoxy(48,5);printf("A%cO:",165);
	gotoxy(52,5);scanf("%s",&r.e.year);
	gotoxy(0,6);printf("__________________________________________________________________________________________________");
	gotoxy(1,7);printf("DATOS EMPLEADO");
	gotoxy(5,8);printf("APELLIDOS Y NOMBRES:");
	gotoxy(26,8);scanf("%s",&r.d.apellidoEmpleado);
	gotoxy(5,9);printf("CEDULA:");
	gotoxy(26,9);scanf("%s",&r.d.cedula);
	gotoxy(65,8);printf("PROFESION:");
	gotoxy(83,8);scanf("%s",&r.d.profesion);
	gotoxy(65,9);printf("HORAS TRABAJADAS:");
	gotoxy(83,9);scanf("%s",&r.d.horasLaboradas);
	gotoxy(1,10);printf("_________________________________________________________________________________________________");
	gotoxy(10,11);printf("INGRESOS");
	gotoxy(65,11);printf("EGRESOS");
	gotoxy(45,11);printf("|");gotoxy(45,12);printf("|");gotoxy(45,13);printf("|");gotoxy(45,14);printf("|");
	gotoxy(45,15);printf("|");gotoxy(45,16);printf("|");gotoxy(45,17);printf("|");gotoxy(45,18);printf("|");
	gotoxy(45,19);printf("|");gotoxy(45,20);printf("|");gotoxy(45,21);printf("|");
	gotoxy(1,12);printf("_________________________________________________________________________________________________");
	gotoxy(5,13);printf("SUELDO:");
	gotoxy(27,13);scanf("%f",&r.i.sueldo);
	gotoxy(60,13);printf("ANTICIPIO DE SUELDO:");
	gotoxy(85,13);scanf("%f",&r.eg.anticipioSueldo);
	gotoxy(5,14);printf("DIAS LABORADOS:");
	gotoxy(27,14);scanf("%i",&r.i.diasLaborados);
	gotoxy(60,14);printf("PRESTAMO IESS:");
	gotoxy(85,14);scanf("%f",&r.eg.prestamosIESS);
	gotoxy(5,15);printf("HORAS EXTRAS:");
	gotoxy(27,15);scanf("%f",&r.i.horasExtra);
	gotoxy(60,15);printf("IMPUESTO A LA RENTA:");
	gotoxy(85,15);scanf("%f",&r.eg.impuestoRenta);
	float extra=0;//variable para calcular las horas extras
	extra = ((r.i.sueldo / 30)/8)*r.i.horasExtra;//calcula el valor de las horas extras
	gotoxy(5,16);printf("VALOR HORAS EXTRAS:");
	gotoxy(27,16);printf("%.2f",extra);
	r.eg.IESS =  (r.i.sueldo*9.45)/100; //formula para calucular el aporte al iess
	gotoxy(60,16);printf("IESS (9.45%): %.2f",r.eg.IESS);
	gotoxy(85,16);printf("%.2f",r.eg.IESS);
	
		r.i.totalIngresos =  r.i.sueldo + extra;//suma las horas extras al sueldo
	gotoxy(5,20);printf("TOTAL INGRESOS:%.2f",r.i.totalIngresos);
	r.eg.totalEgresos = r.eg.anticipioSueldo +r.eg.prestamosIESS+r.eg.impuestoRenta+r.eg.IESS;
	gotoxy(60,20);printf("TOTAL DE EGRESOS:%.2f",r.eg.totalEgresos);
	gotoxy(1,21);printf("_________________________________________________________________________________________________");
	r.bs.vacaciones = (((r.i.sueldo + extra)*12) /24)/12;
	gotoxy(5,22);printf("VACACIONES:");
	gotoxy(27,22);printf("%.2f",r.bs.vacaciones);
	r.bs.decimoTercero = (r.i.sueldo + extra )/12;
    gotoxy(5,23);printf("DECIMO TERCERO:");
    gotoxy(27,23);printf("%.2f",r.bs.decimoTercero);
	r.bs.decimoCuarto = 400.00 / 12 ;
	gotoxy(5,24);printf("DECIMO CUARTO:");
	gotoxy(27,24);printf("%.2f",r.bs.decimoCuarto);
	r.bs.fondosReserva = ((r.i.sueldo +extra)*8.33)/100;
	gotoxy(5,25);printf("FONDOS DE RESERVA:");
	gotoxy(27,25);printf("%.2f",r.bs.fondosReserva);
	r.bs.totalBeneficios = r.bs.vacaciones +r.bs.decimoTercero +r.bs.decimoCuarto + r.bs.fondosReserva;		
	gotoxy(5,28);printf("TOTAL BENEFICIOS:%.2f",r.bs.totalBeneficios);
	gotoxy(1,29);printf("_________________________________________________________________________________________________");
	float totaling=0;
	totaling = r.i.totalIngresos +r.bs.totalBeneficios;
	gotoxy(30,30);printf("TOTAL A PAGAR SIN LOS EGRESOS: %.2f",totaling);
	r.totalRol = totaling - r.eg.totalEgresos;
	gotoxy(1,31);printf("_________________________________________________________________________________________________");
	gotoxy(40,32);printf ("NETO A RECIBIR: %.2f",r.totalRol);
	gotoxy(1,33);printf("_________________________________________________________________________________________________");
	system("color 70");
	return 0;
}

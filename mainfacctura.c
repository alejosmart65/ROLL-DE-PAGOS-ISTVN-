#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define a 850

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
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
	 

	return 0;
}
	return 0;
}

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
	gotoxy(50,2);printf("ROL DE PAGO");

	return 0;
}

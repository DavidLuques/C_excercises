#include "funciones.h"
#include <stdbool.h>

typedef struct {
    int dia;
    int mes ;
    int anio;
} Fecha;




bool esBisiesto(int anio){
    if (((anio%4==0) && (anio%100!=0)) || (anio%400==0))
    {return true;}
    else
       {
         return false;
       } //((anio % 4 == 0) && (anio % 100 != 0)) || (anio % 400 == 0)
}

int cantDiaMes(int mes,int anio){
static cd[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
if (mes==2 && esBisiesto(anio)){
    return 29;
}
return cd[mes];
}

bool esFechaValida(Fecha f){
    if(f.anio>1601){
        if(f.mes>=1&&f.mes<=12){
            if(f.dia>=1 && f.dia<=cantDiaMes(f.mes,f.anio)){
                return true;
            }
        }
    }
    return false;
}

 Fecha IngresarFecha(){
     Fecha Fecha;
 puts("ingrese una fecha (d/m/a)\n");
 scanf("%d/%d/%d/",&Fecha.dia,&Fecha.mes,&Fecha.anio);
 while(!esFechaValida(Fecha)){
    puts("fecha invalida che !  ingresa denuevo! \n ");
    scanf("%d/%d/%d/",&Fecha.dia,&Fecha.mes,&Fecha.anio);
 }
 return Fecha;
 }

void imprimirEsBisiesto(int anio){

 if(esBisiesto(anio)==1)
 {
    printf("re es bisiesto");
 }
 else {
    printf("ups! no es bisiesto che");
 }
    }

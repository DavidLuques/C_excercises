#include "funciones.h"




int main() {

    Fecha fe=IngresarFecha();
    printf("dia:%d/ mes:%d/ anio:%d\n",fe.dia,fe.mes,fe.anio);
    imprimirEsBisiesto(fe.anio);


}

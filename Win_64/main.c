#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"

/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
     2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).
     3. Alta de empleado
     4. Modificar datos de empleado
     5. Baja de empleado
     6. Listar empleados
     7. Ordenar empleados
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).
     9. Guardar los datos de los empleados en el archivo data.csv (modo binario).
    10. Salir
*****************************************************/


int main()
{
    //ME QUEDE EN CONTROLLER - ADD EMPLOYEES
    int option = 0;
    LinkedList* listaEmpleados = ll_newLinkedList();
    controller_loadFromText("data.csv", listaEmpleados);

    do
    {
        printf("\t\tMenu de opciones:\n1-Cargar los datos de los empleados desde el archivo data.csv (modo texto)\n2-Cargar los datos de los empleados desde el archivo data.csv (modo binario)\n3-Alta de empleado\n4-Modificar datos del empleado\n5-Baja de empleado\6-Listar empleados\n7-Ordenar Empleados\n8-Guardar los datos de los empleados en el archivo data.csv (modo texto)\n9-Guardar los datos de los empleados en el archivo data.csv (modo binario)\n Elegir: ");
        scanf("%d", &option);
        switch(option)
        {
            case 1: controller_loadFromText("data.csv", listaEmpleados);
            case 2: controller_loadFromBinary("data.csv", listaEmpleados);
            case 3: controller_addEmployee(listaEmpleados);
            case 4: controller_editEmployee(listaEmpleados);
            case 5: controller_removeEmployee(listaEmpleados);
            case 6: controller_ListEmployee(listaEmpleados);
            case 7: controller_sortEmployee(listaEmpleados);
            case 8: controller_saveAsText("datosActualizados.csv", listaEmpleados);
            case 9: controller_saveAsBinary("datosActualizados.dat", listaEmpleados);

        }
    }while(option != 10);
    return 0;
}

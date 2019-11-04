#include "Employee.h"
Employee* employee_new()
{
    Employee* Empleado;
    Empleado = (void*) malloc(sizeof(Employee));
    return Empleado;
}

Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr, char* sueldoStr)
{
    Employee* Empleado;
    Empleado = (void*) malloc(sizeof(Employee));
    Empleado->horasTrabajadas = atoi(horasTrabajadasStr);
    Empleado->id = atoi(idStr);
    Empleado->sueldo = atoi(sueldoStr);
    strcpy(Empleado->nombre, nombreStr);
    return Empleado;
}

void employee_delete()
{

}

int employee_setId(Employee* this,int id)
{
    this->id = id;
}

int employee_getId(Employee* this)
{
    return this->id;
}

int employee_setNombre(Employee* this,char* nombre)
{
    strcpy(this->nombre, nombre);
}

int employee_getNombre(Employee* this)
{
    return this->nombre;
}

int employee_setHorasTrabajadas(Employee* this,int horasTrabajadas)
{
     this->horasTrabajadas = horasTrabajadas;
}

int employee_getHorasTrabajadas(Employee* this)
{
     return this->horasTrabajadas;
}

int employee_setSueldo(Employee* this,int sueldo)
{
     this->sueldo = sueldo;
}

int employee_getSueldo(Employee* this)
{
   return this->sueldo;
}






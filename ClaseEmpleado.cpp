#include <iostream>
#include "ClasePersona.cpp"
using namespace std;

class Empleado: Persona
{
private:
    // atributos
    int codigo;
public:
    // constructor
    Empleado(int _codigo= 0,string _nombre="",string _apellido_paterno="",string _apellido_materno=""): Persona (_nombre,_apellido_paterno,_apellido_materno)
    {
        codigo = _codigo;
    }
    // get y set de cada atributo

    int getCodigo()
    {
        return codigo;
    }
    void setCodigo(int _codigo)
    {
        codigo = _codigo;
    }
    // metodo para imprimir los datos
    string getDataEmpleado()
    {
        return getNombre() + " " + getApellidoPaterno() + " " + getApellidoMaterno() + "  Codigo: " + to_string(codigo) ;
    }
};
#include <iostream>
#include "ClaseEmpleado.cpp"//llamamos al archivo ClaseEmpleado.cpp
#include "ClaseRepuesto.cpp"//llamamos al archivo ClaseRepuesto.cpp
#include "ClaseServicio.cpp"//llamamos al archivo ClaseServicio.cpp
using namespace std;
class Tienda
{
    private:
    //atributos
    string nombre_tienda;
    string ubicacion;
    public:
    //constructor
    Tienda(string _nombre_tienda,string _ubicacion){
        nombre_tienda = _nombre_tienda;
        ubicacion = _ubicacion;
    }
    //get y set de cada atributo
    string getNombreTienda(){
        return nombre_tienda;
    }
    void setNombreTienda(string _nombre_tienda){
        nombre_tienda = _nombre_tienda;
    }
    string getUbicacion(){
        return ubicacion;
    }
    void setUbicacion(string _ubicacion){
        ubicacion = _ubicacion;
    }
};
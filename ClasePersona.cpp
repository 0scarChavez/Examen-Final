#include <iostream>
using namespace std;

class Persona
{
    private:
    //atributos
    string nombre;
    string apellido_paterno;
    string apellido_materno;
    public:
    //constructor
    Persona(string _nombre="",string _apellido_paterno="",string _apellido_materno=""){
        nombre = _nombre;
        apellido_paterno = _apellido_paterno;
        apellido_materno = _apellido_materno;
    }
    //get y set de cada atributo
    string getNombre(){
        return nombre;
    }
    void setNombre(string _nombre){
        nombre = _nombre;
    }
    string getApellidoPaterno(){
        return apellido_paterno;
    }
    void setApellidoPaterno(string _apellido_paterno){
        apellido_paterno = _apellido_paterno;
    }
    string getApellidoMaterno(){
        return apellido_materno;
    }
    void setApellidoMaterno(string _apellido_materno){
        apellido_materno = _apellido_materno;
    }
};
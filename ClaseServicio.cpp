#include <iostream>
using namespace std;

class Servicios
{
    private:
    string servicio;
    string tiempo;
    public:
    Servicios(string _servicio = "", string _tiempo = ""){
        
        servicio = _servicio;
        tiempo = _tiempo;
    }
    // get y set de cada atributo

    string getServicio()
    {
        return servicio;
    }
    void setServicio(string _servicio)
    {
        servicio = _servicio;
    }

    string getTiempo()
    {
        return tiempo;
    }
    void setTiempo(string _tiempo)
    {
        tiempo = _tiempo;
    }
    //metodo para mostrar datos
    string DatosServicios(){
        return servicio + "  Tiempo(minutos): " + tiempo + "\n";
    }
};
#include <iostream>

using namespace std;

class Repuestos 
{
private:
    // atributos
    string descripcion;
    string fecha_registro;
    int cantidad;
    int precio;
public:
    // constructor
    Repuestos(string _descripcion,string _fecha_registro = "", int _cantidad = 0, int _precio = 0.0)
    {
        descripcion = _descripcion;
        fecha_registro = _fecha_registro;
        cantidad = _cantidad;
        precio = _precio;
    }
    //get y set de cada atributo
    string getDescripcion()
    {
        return descripcion;
    }
    void setDescripcion(string _descripcion)
    {
        descripcion = _descripcion;
    }
    string getFecheRegistro()
    {
        return fecha_registro;
    }
    void setFecha_registro(string _fecha_registro)
    {
        fecha_registro = _fecha_registro;
    }
    int getCantidad()
    {
        return cantidad;
    }
    void setCantidad(int _cantidad)
    {
        cantidad = _cantidad;
    }
    int getPrecio()
    {
        return precio;
    }
    void setPrecio(int _precio)
    {
        precio = _precio;
    }

    //metodo para mostrar los datos
     string getDatosRepuestos()
    {
        return "Descripcion: "+ descripcion +"  Fecha de Ingreso: " + fecha_registro + "  Cantidad: " + to_string(cantidad) + "  S/: " + to_string(precio) + "\n";
    }

};
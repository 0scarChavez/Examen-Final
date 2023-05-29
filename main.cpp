#include <iostream> //biblioteca para entrada y salida de datos
#include <fstream>  //biblioteca para crear archivos txt
#include <iomanip>  //biblioteca para hacer que en la impresion se ordenen por espacios
#include "ClaseTienda.cpp"
using namespace std;

int main()
{
    // creamos estas variables
    int codigo, selec_servicio, selec_repuesto;

    // definimos la clase tienda
    Tienda tienda("Motorin", "AV. Amazonas cuadra 3");
    // definimos la clase empleado
    // por ello creamos a empleado1 y empleado2
    Empleado empleado1(1001, "Akemi", "Zambrano", "Lama");
    Empleado empleado2(1002, "Axel", "Acharte", "Bernales");
    // hacemos un arreglo de empleados
    Empleado empleados[] = {empleado1, empleado2};

    // definimos los servicios los cuales crearemos 4
    Servicios servicio1("Cambio de Aceite", "25");
    Servicios servicio2("Cambio de Llanta", "30");
    Servicios servicio3("Cambio de pastilla", "30");
    Servicios servicio4("Cambio de Bujia", "10");
    // creamos un arreglo de servicios
    Servicios servicios[] = {servicio1, servicio2, servicio3, servicio4};
    // creamos tamanio_servicio para saber el tamaño del arreglo servicios
    int tamanio_servicios = sizeof(servicios) / sizeof(servicios[0]);

    // definimos los repuestos que seran 8

    Repuestos repuesto1("Aceite", "01/02/2023", 4, 32);
    Repuestos repuesto2("Llanta", "03/02/2023", 7, 60);
    Repuestos repuesto3("Pastillas", "10/02/2023", 8, 23);
    Repuestos repuesto4("Bujia", "23/03/2023", 5, 7);
    Repuestos repuesto5("Espejo", "21/04/2023", 6, 25);
    Repuestos repuesto6("Faro", "15/05/2023", 7, 23);
    Repuestos repuesto7("Aro", "31/05/2023", 3, 52);
    Repuestos repuesto8("Bateria", "16/06/2023", 6, 100);

    // creamos un arreglo de repuestos
    Repuestos repuestos[] = {repuesto1, repuesto2, repuesto3, repuesto4, repuesto5, repuesto6, repuesto7, repuesto8};

    // creamos tamanio_repuestos para saber el tamaño del arreglo repuestos
    int tamanio_repuestos = sizeof(repuestos) / sizeof(repuestos[0]);

    // usamos el ofstream para crear un archivo Reporte de productos.txt y almacenar datos ahi
    ofstream productos("Reporte de productos.txt");

    // hacemos que en ese txt se guarde los productos que se encuentran en stock
    productos << "Los productos que se encuentran en stock\n\n";
    for (int i = 0; i < tamanio_repuestos; i++)
    {
        productos << repuestos[i].getDatosRepuestos();
    }

    system("cls"); // usamos el system("cls") para limpiar pantalla
    cout << "\t" << tienda.getNombreTienda();
    // solicitamos que ingrese el codigo de empleado
    cout << "\n\nIngrese su codigo de empleado \n->";
    cin >> codigo;
    // hacemos una restriccion que si los codigos ingresados no son validos siga solicitando el codigo
    while (codigo != empleado1.getCodigo() && codigo != empleado2.getCodigo())
    {
        system("cls");
        cout << "ERROR ESA OPCION NO EXISTE\n";
        cout << "Ingrese su codigo de empleado: \n";
        cin >> codigo;
    }
    // hacemos un if para que si el codigo es igual al codigo del empleado1, codigo lo igualamos a 0 para mas adelante usarlo como un arreg
    if (codigo == empleado1.getCodigo())
    {
        codigo = 0;
    }
    // hacemos un if para que si el codigo es igual al codigo del empleado2, codigo lo igualamos a 1 para mas adelante usarlo como un arreg
    if (codigo == empleado2.getCodigo())
    {
        codigo = 1;
    }

    system("cls"); // usamos el system("cls") para limpiar pantalla

    // luego de a ver ingresado el codigo de empleado
    // se muestre un menu con los servicios que se puede brindar en el taller
    cout << "SERVICIOS: \n";
    cout << "1. Comprar un respuesto\n";
    // for para mostrar los servicios
    for (int i = 0; i < tamanio_servicios; i++)
    {
        cout << i + 2 << ". " << servicios[i].getServicio() << "\n";
    }
    // le decimos que ingrese que servicio se realizara
    cout << "Ingrese que servicio desea realizar \n->";
    cin >> selec_servicio;
    // restriccion para que si las opcion ingresada no es la adecuada que vuelva a solicitar
    while (selec_servicio > 5 || selec_servicio < 1)
    {
        system("cls");
        cout << "ERROR ESA OPCION NO EXISTE\n";
        cout << "SERVICIOS: \n";
        cout << "1. Comprar un respuesto\n";
        // for para mostrar los servicios
        for (int i = 0; i < tamanio_servicios; i++)
        {
            cout << i + 2 << ". " << servicios[i].getServicio() << "n";
        }
        cout << "Ingrese que servicio desea realizar \n->";
        cin >> selec_servicio;
    }
    // creamos un archivo Servicio.txt para almacenar los siguientes datos
    ofstream arch("Servicio.txt");
    // seguido de ellos creamos uun switch variando con la variable selec_servicio
    switch (selec_servicio)
    {
    case 1:                                           // si selec_servicio es 1 entonces
        system("cls");                                // usamos el system("cls") para limpiar pantalla
        cout << "Usted Eligio Comprar un repuesto\n"; // le decimos cual servicio selecciono
        cout << "Estos son los repuestos que se encuentran en nuestro stock\n";
        // mostrsmos los repuestos que se puede comprar en la tienda
        for (int i = 0; i < tamanio_repuestos; i++)
        {
            cout << i + 1 << ". " << repuestos[i].getDescripcion() << "\n";
        }
        // le decimos que seleccione algun repuesto
        cout << "Seleccione que repuesto desea comprar\n->";
        cin >> selec_repuesto;
        // hacemos una restriccion que si ingreso una opcion no valida la vuelta a ingresar
        while (selec_repuesto > 8 || selec_repuesto < 1)
        {
            system("cls");
            cout << "ERROR ESA OPCION NO EXISTE\n";
            cout << "Estos son los repuestos que se encuentran en nuestro stock\n";
            for (int i = 0; i < tamanio_repuestos; i++)
            {
                cout << i + 1 << ". " << repuestos[i].getDescripcion() << "\n";
            }
            cout << "Seleccione que repuesto desea comprar\n->";
            cin >> selec_repuesto;
        }
        // en la consola le decimos cual repuesto compro y el precio
        cout << "Usted desea comprar: " << repuestos[selec_repuesto - 1].getDescripcion() << "\n";
        cout << "El precio es: s/" << repuestos[selec_repuesto - 1].getPrecio();
        // descontamos el repuesto seleccionado
        repuestos[selec_repuesto - 1].setCantidad(repuestos[selec_repuesto - 1].getCantidad() - 1);

        // hacemos la siguiente lista para mostrar en Servicio.txt
        arch << "El servicio es Compra de Repuesto\n";
        arch << "Empleado: " << empleados[codigo].getDataEmpleado() << "\n\n";//imprimimos los datos del empleado
        arch << "Se vendio: ";
        arch << left << setw(24) << repuestos[selec_repuesto - 1].getDescripcion() << "\n";///el repuesto que selecciono
        arch << "Quedan: ";
        arch << left << setw(5) << repuestos[selec_repuesto - 1].getCantidad();//la cantidad que quedan de ese repuesto
        arch << left << setw(2) << "s/";
        arch << right << setw(3) << repuestos[selec_repuesto - 1].getPrecio();//el precio del repuesto
        break;
    case 2: // si selec_servicio es 2 entonces
        system("cls");
        cout << "Usted Eligio " << servicios[selec_servicio - 2].getServicio() << "\n";//le decimos que servicio eligio 
        cout << "Tiempo estimado (minutos): " << servicios[selec_servicio - 2].getTiempo() << "\n";//cuanto tiempo demorara
        // descontamos el repuesto seleccionado
        repuesto1.setCantidad(repuesto1.getCantidad() - 1);

        // hacemos la siguiente lista para mostrar en Servicio.txt
        arch << "EL servicio realizdo fue " << servicios[selec_servicio - 2].DatosServicios();//imprimimos los datos del servicio
        arch << "Empleado: " << empleados[codigo].getDataEmpleado() << "\n\n";//imprimimos los datos del empleado
        arch << "En este servicio se vendio: ";
        arch << left << setw(24) << repuesto1.getDescripcion() << "\n";///el repuesto que selecciono
        arch << "Quedan: ";
        arch << left << setw(5) << repuesto1.getCantidad();//la cantidad que quedan de ese repuesto
        arch << left << setw(2) << "s/";
        arch << right << setw(3) << repuesto1.getPrecio();//el precio del repuesto
        break;
    case 3:            // si selec_servicio es 3 entonces
        system("cls"); // usamos el system("cls") para limpiar pantalla
        cout << "Usted Eligio " << servicios[selec_servicio - 2].getServicio() << "\n";//le decimos que servicio eligio 
        cout << "Tiempo estimado (minutos): " << servicios[selec_servicio - 2].getTiempo() << "\n";//cuanto tiempo demorara
        // descontamos el repuesto seleccionado
        repuesto2.setCantidad(repuesto2.getCantidad() - 1);

        //hacemos la siguiente lista para mostrar en Servicio.txt
        arch << "EL servicio realizdo fue " << servicios[selec_servicio - 2].DatosServicios();//imprimimos los datos del servicio
        arch << "Empleado: " << empleados[codigo].getDataEmpleado() << "\n\n";//imprimimos los datos del empleado
        arch << "En este servicio se vendio: ";
        arch << left << setw(24) << repuesto2.getDescripcion() << "\n";///el repuesto que selecciono
        arch << "Quedan: ";
        arch << left << setw(5) << repuesto2.getCantidad();//la cantidad que quedan de ese repuesto
        arch << left << setw(2) << "s/";
        arch << right << setw(3) << repuesto2.getPrecio();//el precio del repuesto
        break;
    case 4:            // si selec_servicio es 4 entonces
        system("cls"); // usamos el system("cls") para limpiar pantalla
        cout << "Usted Eligio " << servicios[selec_servicio - 2].getServicio() << "\n";//le decimos que servicio eligio 
        cout << "Tiempo estimado (minutos): " << servicios[selec_servicio - 2].getTiempo() << "\n";//cuanto tiempo demorara
        // descontamos el repuesto seleccionado
        repuesto3.setCantidad(repuesto3.getCantidad() - 1);

        // hacemos la siguiente lista para mostrar en Servicio.txt
        arch << "EL servicio realizdo fue " << servicios[selec_servicio - 2].DatosServicios();//imprimimos los datos del servicio
        arch << "Empleado: " << empleados[codigo].getDataEmpleado() << "\n\n";//imprimimos los datos del empleado
        arch << "En este servicio se vendio: ";
        arch << left << setw(24) << repuesto3.getDescripcion() << "\n";///el repuesto que selecciono
        arch << "Quedan: ";
        arch << left << setw(5) << repuesto3.getCantidad();//la cantidad que quedan de ese repuesto
        arch << left << setw(2) << "s/";
        arch << right << setw(3) << repuesto3.getPrecio();//el precio del repuesto
        break;
    case 5:            // si selec_servicio es 5 entonces
        system("cls"); // usamos el system("cls") para limpiar pantalla
        cout << "Usted Eligio " << servicios[selec_servicio - 2].getServicio() << "\n";//le decimos que servicio eligio 
        cout << "Tiempo estimado (minutos): " << servicios[selec_servicio - 2].getTiempo() << "\n";//cuanto tiempo demorara
        // descontamos el repuesto seleccionado
        repuesto4.setCantidad(repuesto4.getCantidad() - 1);

        // hacemos la siguiente lista para mostrar en Servicio.txt
        arch << "EL servicio realizdo fue " << servicios[selec_servicio - 2].DatosServicios();//imprimimos los datos del servicio
        arch << "Empleado: " << empleados[codigo].getDataEmpleado() << "\n\n";//imprimimos los datos del empleado
        arch << "En este servicio se vendio: ";
        arch << left << setw(24) << repuesto4.getDescripcion() << "\n";///el repuesto que selecciono
        arch << "Quedan: ";
        arch << left << setw(5) << repuesto4.getCantidad();//la cantidad que quedan de ese repuesto
        arch << left << setw(2) << "s/";
        arch << right << setw(3) << repuesto4.getPrecio();//el precio del repuesto
        break;
    }

    return 0;
}
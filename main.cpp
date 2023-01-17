#include "aeropuerto.hpp"
//#include "aeropuertos.hpp"

#include <iostream>
#include <string>

using namespace std;
using namespace cositas;
int main(){

    cout<<"hola"<<endl;

    // Aeropuerto x = Aeropuerto("MAD","SPAIN",3.3,2.2);

    // double lat = 3.00;
    // double lon = 4.00;
    // Aeropuerto a = Aeropuerto();
    // a.asignar_nombre("prueba");

    // a.asignar_pais("huelva");
    // a.asignar_latitud(lat);
    // a.asignar_longitud(lon);
    //  //Aeropuerto x = Aeropuerto()
    // a.escribir_aeropuerto();

    // cout << "nombre: " << a.consultar_nombre() << endl;
    // cout << "pais: " << a.consultar_pais() << endl;
    // cout << "longitud: " << a.consultar_longitud() << endl;
    // cout << "latitud: " << a.consultar_latitud() << endl;

    // Aeropuerto b  = Aeropuerto(a);

    // b.escribir_aeropuerto();

    // Aeropuerto c = Aeropuerto();

    // c.escribir_aeropuerto();

    // cout << "holaaa" << endl;

    // x.escribir_aeropuerto();

    Aeropuerto y = Aeropuerto("MAD","SPAIN",3.3,5.4);
    y.escribir_aeropuerto();
}
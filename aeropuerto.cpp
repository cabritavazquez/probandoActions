#include "aeropuerto.hpp"
#include <string>
//#include <iostream>

//using namespace std;


namespace cositas{

    Aeropuerto :: ~Aeropuerto(){}
    Aeropuerto :: Aeropuerto() : nombre(""), pais(""), latitud(0.0), longitud(0.0){}

    Aeropuerto :: Aeropuerto(string nombre_ini,string pais_ini, double latitud_ini, double longitud_ini): nombre(nombre_ini), pais(pais_ini), latitud(latitud_ini),longitud(longitud_ini){}

    Aeropuerto :: Aeropuerto(const Aeropuerto &otro_aeropuerto): nombre(otro_aeropuerto.nombre), pais(otro_aeropuerto.pais), latitud(otro_aeropuerto.latitud),longitud(otro_aeropuerto.longitud){}

    void Aeropuerto :: asignar_nombre(const std::string &nuevo_nombre){

        nombre = nuevo_nombre;
    }

    void Aeropuerto :: asignar_pais(const std::string &nuevo_pais){

        pais = nuevo_pais;
    }

    void Aeropuerto :: asignar_latitud(double &nueva_latitud){

        latitud = nueva_latitud;
    }

    void Aeropuerto :: asignar_longitud(double &nueva_longitud){

        longitud = nueva_longitud;
    }

    std::string Aeropuerto :: consultar_nombre() const{

        return nombre;
    }

    std::string Aeropuerto :: consultar_pais() const{

        return pais;
    }

    double Aeropuerto :: consultar_latitud() const{

        return latitud;
    }

    double Aeropuerto :: consultar_longitud() const{

        return longitud;
    }

    void Aeropuerto :: escribir_aeropuerto() const{

       cout<<"<"<<nombre<<">,<"<<pais<<">,<"<<latitud<<">,<"<<longitud<<">"<<endl;

    }

}//cierra el namespace;
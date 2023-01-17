#ifndef AEROPUERTO_HPP_
#define AEROPUERTO_HPP_

#include <string>
#include <iostream>
#include <cassert>

using namespace std;


namespace cositas{

    class Aeropuerto
    {

    public:
        ~Aeropuerto();
        Aeropuerto();
        Aeropuerto(string nombre_ini,string pais_ini, double latitud_ini, double longitud_ini);
        Aeropuerto(const Aeropuerto &otro_aeropuerto);
        void asignar_nombre(const std::string &nuevo_nombre);
        void asignar_pais(const std::string &nuevo_pais);
        void asignar_latitud(double &nueva_latitud);
        void asignar_longitud(double &nueva_longitud);
        std::string consultar_nombre() const;
        std::string consultar_pais() const;
        double consultar_latitud() const;
        double consultar_longitud() const;
        void escribir_aeropuerto() const;

    private:

        std::string nombre;
        std::string pais;
        double latitud;
        double longitud;
        

    }; //cierra la clase
} //cierra el namespace
#endif
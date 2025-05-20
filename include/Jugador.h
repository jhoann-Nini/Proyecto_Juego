#ifndef JUGADOR_H
#define JUGADOR_H

#include <iostream>
#include <string>

using namespace std;

class Jugador 
{
    protected:
        string nombre;
        bool esCPU;
        int puntuacionAcumulada;

    public:
        Jugador(); 
        Jugador(const string& nombre, bool esCPU, int puntuacionAcumulada);

        string getNombre() const;
        bool getEsCPU() const;
        int getPuntuacionAcumulada() const;
        
        void setNombre(const string& nombre);
        void setEsCPU(bool esCPU);
        void setPuntuacionAcumulada(int puntuacionAcumulada);

        void actualizarPuntuacion(int puntuacion);
};

#endif

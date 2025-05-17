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

        // Métodos virtuales puros para las clases derivadas JugadorHumano y JugadorCPU 
        virtual void iniciar();
        virtual void jugar();
        virtual void mostrarEstadistica() const;
        virtual void destruirRecursos();

        void setNombre(const string& nombre);
        void setEsCPU(bool esCPU);
        void setPuntuacionAcumulada(int puntuacionAcumulada);
};

#endif

#ifndef CONCENTRACION_H
#define CONCENTRACION_H

#include <iostream>
#include <string>
#include <vector>
#include "Tablero.h"

using namespace std;

class Concentrece : public Tablero
{
    protected:
        vector<char> tableroOculto;
        vector<char> tableroVisible;
        pair<int, int> parejasDescubiertas; // Almacena el número de parejas descubiertas y el número de intentos
        // El primer elemento de la pareja es el número de parejas descubiertas
        // El segundo elemento de la pareja es el número de intentos
        int dificultad;

    public:
        Concentrece();
        Concentrece(const string& nombre, const string& resultado,
                    int puntuacion, int tiempoJuego, int modoJuego,
                    GestorArchivos* gestorArchivos, Jugador* jugador);

        void iniciar() override; // override indica que estamos sobreescribiendo un método virtual en la clase base
        void mostrarEstadistica() const override;
        void guardarHistorial() override;
        void finalizarPartida() override;
        void establecerDificultad() override;
        void destruirRecursos() override;

        vector<char> getTableroOculto() const;
        vector<char> getTableroVisible() const;
        pair<int, int> getParejasDescubiertas() const;
        int getDificultad() const;

        void setTableroOculto(const vector<char>& tableroOculto);
        void setTableroVisible(const vector<char>& tableroVisible);
        void setParejasDescubiertas(const pair<int, int>& parejasDescubiertas);
        void setDificultad(int dificultad);
};

#endif

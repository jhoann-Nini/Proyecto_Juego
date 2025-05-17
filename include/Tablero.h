#ifndef TABLERO_H
#define TABLERO_H

#include <iostream>
#include <string>
#include <ctime> 
using namespace std;


class GestorArchivos;
class Tablero 
{
    protected:
        string nombre;
        string jugador;
        string resultado;
        int puntuacion;
        bool activo;
        time_t tiempoInicio;
        int tiempoJuego;
        int modoJuego;
    
    public:
        Tablero();
        Tablero (const string& nombre, const string& jugador, const string& resultado,
            int puntuacion, bool activo, time_t tiempoInicio, int tiempoJuego, int modoJuego);
        

        string getNombre() const;
        string getJugador() const;
        string getResultado() const;
        int getPuntuacion() const;
        bool getActivo() const;
        time_t getTiempoInicio() const;
        int getTiempoJuego() const;
        int getModoJuego() const;

        virtual void iniciar()= 0; // Método virtual puro, se inicializa el tablero de acuerdo al modo de juego seleccionado
        virtual void mostrarEstadistica() const; // Método virtual puro para mostrar estadísticas del jugador en el tablero de acuerdo al modo de juego seleccionado 

        void guardarHistorial(); 
        void finalizarPartida(); 
        void establecerDificultad(); 
        void destruirRecursos();
        
        void setNombre(const string& nombre);
        void setJugador(const string& jugador);
        void setResultado(const string& resultado);
        void setPuntuacion(int puntuacion);
        void setActivo(bool activo);
        void setTiempoInicio(time_t tiempoInicio);
        void setTiempoJuego(int tiempoJuego);
        void setModoJuego(int modoJuego);


};

#endif
#ifndef TABLERO_H
#define TABLERO_H

#include <iostream>
#include <string>
using namespace std;


class GestorArchivos;
class Jugador;
class Tablero 
{
    protected:
        string nombre;
        string resultado;
        int puntuacion;
        int tiempoJuego;
        int modoJuego;
        GestorArchivos* gestorArchivos; // puntero a la clase GestorArchivos
        Jugador* jugador; // puntero a la clase Jugador
        
    
    public:
        Tablero();
        Tablero (const string& nombre, const string& resultado,
            int puntuacion, int tiempoJuego, int modoJuego, GestorArchivos* gestorArchivos, Jugador* jugador);
        

        string getNombre() const;
        string getResultado() const;
        int getPuntuacion() const;
        int getTiempoJuego() const;
        int getModoJuego() const;
        Jugador* getJugador() const;
        GestorArchivos* getGestorArchivos() const;

        //Metodos virtuales puros
        virtual void iniciar()= 0; 
        virtual void mostrarEstadistica() const = 0; 
        
        //Metodos comunes
        virtual void guardarHistorial(); 
        virtual void finalizarPartida(); 
        virtual void establecerDificultad(); 
        virtual void destruirRecursos();
        
        void setNombre(const string& nombre);
        void setResultado(const string& resultado);
        void setPuntuacion(int puntuacion);
        void setTiempoJuego(int tiempoJuego);
        void setModoJuego(int modoJuego);
        void setJugador(Jugador* jugador);
        void setGestorArchivos(GestorArchivos* gestorArchivos);

};

#endif
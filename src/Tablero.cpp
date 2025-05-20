#include "Tablero.h"
#include "GestorArchivos.h"
#include "Jugador.h"


string Tablero::getNombre() const 
{
    return nombre;
}
string Tablero::getResultado() const 
{
    return resultado;
}
int Tablero::getPuntuacion() const 
{
    return puntuacion;
}
int Tablero::getTiempoJuego() const 
{
    return tiempoJuego;
}
int Tablero::getModoJuego() const 
{
    return modoJuego;
}
Jugador* Tablero::getJugador() const 
{
    return jugador;
}
GestorArchivos* Tablero::getGestorArchivos() const 
{
    return gestorArchivos;
}

void Tablero::setNombre(const string& nombre) 
{
    this->nombre = nombre;
}

void Tablero::setResultado(const string& resultado) 
{
    this->resultado = resultado;
}

void Tablero::setPuntuacion(int puntuacion) 
{
    this->puntuacion = puntuacion;
}
void Tablero::setTiempoJuego(int tiempoJuego) 
{
    this->tiempoJuego = tiempoJuego;
}
void Tablero::setModoJuego(int modoJuego) 
{
    this->modoJuego = modoJuego;
}
void Tablero::setJugador(Jugador* jugador) 
{
    this->jugador = jugador;
}
void Tablero::setGestorArchivos(GestorArchivos* gestorArchivos) 
{
    this->gestorArchivos = gestorArchivos;
}
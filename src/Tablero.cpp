#include "Tablero.h"
#include "GestorArchivos.h"


string Tablero::getNombre() const 
{
    return nombre;
}

string Tablero::getJugador() const
{
    return jugador;
}

string Tablero::getResultado() const
{
    return resultado;
}

int Tablero::getPuntuacion() const
{
    return puntuacion;
}

bool Tablero::getActivo() const
{
    return activo;
}

time_t Tablero::getTiempoInicio() const
{
    return tiempoInicio;
}

int Tablero::getTiempoJuego() const
{
    return tiempoJuego;
}

int Tablero::getModoJuego() const
{
    return modoJuego;
}


void Tablero::setNombre(const string& nombre)
{
    this->nombre = nombre;
}

void Tablero::setJugador(const string& jugador)
{
    this->jugador = jugador;
}

void Tablero::setResultado(const string& resultado)
{
    this->resultado = resultado;
}

void Tablero::setPuntuacion(int puntuacion)
{
    this->puntuacion = puntuacion;
}

void Tablero::setActivo(bool activo)
{
    this->activo = activo;
}

void Tablero::setTiempoInicio(time_t tiempoInicio)
{
    this->tiempoInicio = tiempoInicio;
}

void Tablero::setTiempoJuego(int tiempoJuego)
{
    this->tiempoJuego = tiempoJuego;
}

void Tablero::setModoJuego(int modoJuego)
{
    this->modoJuego = modoJuego;
}

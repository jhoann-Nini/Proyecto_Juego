#include "Jugador.h"

// Constructor por defecto
Jugador::Jugador()
{
    nombre = "";
    esCPU = false;
    puntuacionAcumulada = 0;
}

// Constructor parametrizado
Jugador::Jugador(const string& nombre, bool esCPU, int puntuacionAcumulada)
{
    this->nombre = nombre;
    this->esCPU = esCPU;
    this->puntuacionAcumulada = puntuacionAcumulada;
}


void Jugador::iniciar() {}

void Jugador::jugar() {}

void Jugador::mostrarEstadistica() const {}

void Jugador::destruirRecursos() {}


string Jugador::getNombre() const
{
    return nombre;
}

bool Jugador::getEsCPU() const
{
    return esCPU;
}

int Jugador::getPuntuacionAcumulada() const
{
    return puntuacionAcumulada;
}

// Setters
void Jugador::setNombre(const string& nombre)
{
    this->nombre = nombre;
}

void Jugador::setEsCPU(bool esCPU)
{
    this->esCPU = esCPU;
}

void Jugador::setPuntuacionAcumulada(int puntuacionAcumulada)
{
    this->puntuacionAcumulada = puntuacionAcumulada;
}

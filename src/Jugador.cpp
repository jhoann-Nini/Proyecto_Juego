#include "Jugador.h"

Jugador::Jugador()
{
    nombre = "";
    esCPU = false;
    puntuacionAcumulada = 0;
}

Jugador::Jugador(const string& nombre, bool esCPU, int puntuacionAcumulada)
{
    this->nombre = nombre;
    this->esCPU = esCPU;
    this->puntuacionAcumulada = puntuacionAcumulada;
}

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

void Jugador::actualizarPuntuacion(int puntuacion)
{
    this->puntuacionAcumulada += puntuacion;
}
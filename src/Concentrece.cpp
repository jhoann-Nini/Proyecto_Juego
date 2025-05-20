#include "Concentrece.h"
#include "Tablero.h"

Concentrece::Concentrece()
    : Tablero(), tableroOculto(), tableroVisible(), parejasDescubiertas({0, 0}), dificultad(0)
{
}

Concentrece::Concentrece(const string& nombre, const string& resultado,
                         int puntuacion, int tiempoJuego, int modoJuego,
                         GestorArchivos* gestorArchivos, Jugador* jugador)
    : Tablero(nombre, resultado, puntuacion, tiempoJuego, modoJuego, gestorArchivos, jugador),
      tableroOculto(), tableroVisible(), parejasDescubiertas({0, 0}), dificultad(0)
{
}

// Getters
vector<char> Concentrece::getTableroOculto() const
{
    return tableroOculto;
}

vector<char> Concentrece::getTableroVisible() const
{
    return tableroVisible;
}

pair<int, int> Concentrece::getParejasDescubiertas() const
{
    return parejasDescubiertas;
}

int Concentrece::getDificultad() const
{
    return dificultad;
}

void Concentrece::setTableroOculto(const vector<char>& tableroOculto)
{
    this->tableroOculto = tableroOculto;
}

void Concentrece::setTableroVisible(const vector<char>& tableroVisible)
{
    this->tableroVisible = tableroVisible;
}

void Concentrece::setParejasDescubiertas(const pair<int, int>& parejasDescubiertas)
{
    this->parejasDescubiertas = parejasDescubiertas;
}

void Concentrece::setDificultad(int dificultad)
{
    this->dificultad = dificultad;
}

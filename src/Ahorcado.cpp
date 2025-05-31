#include "Ahorcado.h"
#include "Tablero.h"
#include "Jugador.h"

Ahorcado::Ahorcado(string palabraSecreta, int intentosRestantes, adivinador *jugadorAdivinador, generador *jugadorGenerador)
    : palabraSecreta(palabraSecreta), intentosRestantes(intentosRestantes), Jugador(jugadorAdivinador), Jugador(jugadorGenerador) 
{
    matrizOculta.resize(1, vector<char>(palabraSecreta.length(), '_'));
}

string Ahorcado::getPalabraSecreta() const 
{
    return palabraSecreta;
}
int Ahorcado::getIntentosRestantes() const 
{
    return intentosRestantes;
}
vector<char> Ahorcado::getLetrasAdivinadas() const 
{
    return letrasAdivinadas;
}
vector<char> Ahorcado::getLetrasNoAdivinadas() const 
{
    return letrasNoAdivinadas;
}
matrizOculta Ahorcado::getMatrizOculta() const 
{
    return matrizOculta;
}
adivinador* Ahorcado::getJugadorAdivinador() const 
{
    return Jugador;
}
generador* Ahorcado::getJugadorGenerador() const 
{
    return Jugador;
}
void Ahorcado::setPalabraSecreta(string nuevaPalabra) 
{
    palabraSecreta = nuevaPalabra;
    matrizOculta.resize(1, vector<char>(palabraSecreta.length(), '_'));
}

void Ahorcado::setIntentosRestantes(int nuevosIntentos) 
{
    this->intentosRestantes = nuevosIntentos;
}
void Ahorcado::setLetrasAdivinadas(const vector<char>& letras)
{
    this->letrasAdivinadas = letras;
}
void ahoracado::setLetrasNoAdivinadas(const vector<char>& letras)
{
    this->letrasNoAdivinadas = letras;
}
void ahorcado::setMatrizOculta(const matrizOculta& nuevaMatriz)
{
    this->matrizOculta = nuevaMatriz;
}
void ahorcado::setJugadorAdivinador(adivinador* jugador)
{
    this->Jugador = jugador;
}
void ahorcado::setJugadorGenerador(generador* jugador)
{
    this->Jugador = jugador;
}

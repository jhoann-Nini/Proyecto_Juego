#ifndef AHORCADO_H
#define AHORCADO_H

#include <string>
#include <vector>
#include "Tablero.h"
#include "GestorArchivos.h"
#include "Jugador.h"

using namespace std;

class Ahorcado : public Tablero {
private:
    string palabraSecreta;
    int intentosRestantes;
    vector<char> letrasAdivinadas;
    vector<char> letrasNoAdivinadas;
    char** matrizOculta;
    char** matrizVisible;
    Jugador* adivinador;
    Jugador* generador;

    void inicializarMatrices();
    void liberarMemoriaMatrices();

public:
    Ahorcado(const string& nombre, const string& resultado,
             int puntuacion, int tiempoJuego, int modoJuego,
             GestorArchivos* gestorArchivos, Jugador* jugador);

    void iniciar() override;
    void mostrarEstadistica() const override;
    void guardarHistorial() override;
    void finalizarPartida() override;
    void establecerDificultad() override;
    void destruirRecursos() override;

    void generarPalabraAleatoria();
    void leerPalabraDesdeArchivo();
    bool adivinarLetra(char letra);
    void modoJugadorVsJugador();
    void modoJugadorVsCPU();

    string getPalabraSecreta() const;
    int getIntentosRestantes() const;
    vector<char> getLetrasAdivinadas() const;
    vector<char> getLetrasNoAdivinadas() const;
    char** getMatrizVisible() const;

    void setAdivinador(Jugador* jugador);
    void setGenerador(Jugador* jugador);
};

#endif // AHORCADO_H
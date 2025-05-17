#ifndef GESTORARCHIVOS_H
#define GESTORARCHIVOS_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream> // necesario para leer/escribir archivos

using namespace std;

class Tablero;

class GestorArchivos
{
protected:
    string nombreArchivo;      
    string archivoHistorial;   

public:
    GestorArchivos();
    GestorArchivos(const string& nombreArchivo, const string& archivoHistorial);

    string getNombreArchivo() const;
    string getArchivoHistorial() const;

    void setNombreArchivo(const string& nombreArchivo);
    void setArchivoHistorial(const string& archivoHistorial);

    // Funciones de lectura y escritura
    void guardarHistorial(const Tablero& tablero);              // Guarda el historial de una partida
    void leerPalabra(vector<string>& palabras, const string& nombreArchivo); // Lee palabras desde archivo
    void leerSimbolo(vector<char>& simbolos, const string& nombreArchivo);   // Lee símbolos desde archivo
};

#endif

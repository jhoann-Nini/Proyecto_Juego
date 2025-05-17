#include  "GestorArchivos.h"
#include "Tablero.h"

GestorArchivos::GestorArchivos()
{
    nombreArchivo = "palabras.txt";
    archivoHistorial = "historial.txt";
}

GestorArchivos::GestorArchivos(const string& nombreArchivo, const string& archivoHistorial)
{
    this->nombreArchivo = nombreArchivo;
    this->archivoHistorial = archivoHistorial;
}

string GestorArchivos::getNombreArchivo() const
{
    return nombreArchivo;
}
string GestorArchivos::getArchivoHistorial() const
{
    return archivoHistorial;
}

void GestorArchivos::setNombreArchivo (const string& nombreArchivo)
{
    this->nombreArchivo = nombreArchivo;
}
void GestorArchivos::setArchivoHistorial(const string& archivoHistorial)
{
    this->archivoHistorial = archivoHistorial;
}

#include <iostream>
#include "pch.h"
#include "ClassLibro.h"
#include <string>

using namespace std;

Libro::Libro(string ti, string au, string anio, string num, bool estado) {
	titulo = ti; 
	autor = au;
	anioPublicacion = anio;
	numPaginas = num;
	estadoLibro = estado;
}

string Libro::MostrarDatos() {
	string convertirEstado = estadoLibro == false ? "No disponible." : "Disponible.";
	string contenerInfo;

	contenerInfo = "Titulo: " + titulo + "\n" + "Autor: " + autor + "\n" + 
		"Año de publicacion: " + anioPublicacion +"\n" + "Numero de paginas: " + numPaginas +"\n" + "Estado actual: " + 
		convertirEstado + "\n";
	return contenerInfo;
}

string Libro::PrestarLibro() {
	estadoLibro = false;
	string convertirEstado = estadoLibro == false ? "\nLibro Prestado con exito\n" : "No se presto el libro";
	return convertirEstado;
}

string Libro::DevolverLibro() {
	estadoLibro = true;
	string convertirEstado = estadoLibro == false ? "Libro no devuelto" : "\nLibro devuelto con exito\n";
	return convertirEstado;
}

string Libro::Disponibilidad() {
	string convertirEstado = estadoLibro == false ? "\nEl libro no se encuentra disponible\n" : "\nLibro disponible\n";
	return convertirEstado;
}

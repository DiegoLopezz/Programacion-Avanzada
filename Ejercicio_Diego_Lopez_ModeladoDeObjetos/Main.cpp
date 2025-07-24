#include "pch.h"
#include <iostream>
#include <string>
#include "ClassLibro.h"

using namespace std;

int main()
{
	Libro libro1("Don Quijote", "Miguel de Cervantes", "1605", "10,000", true);

	int o;
	do {
		cout << "Bienvenido al sistema de gestion de libros.\n" << "Digite el numero de la opcion que desee segun el menu:\n" <<
			"\n1. Informacion del libro \n" << "2. Prestar libro \n" << "3. Devolver libro \n" << "4. Consultar disponibilidad \n" << "5. Salir \n";

		cin >> o;

		switch (o) {
		case 1:

			cout << "\nLa informacion del libro es: \n" << libro1.MostrarDatos() << endl;
			break;

		case 2:
			cout << "\nPrestar el libro: \n" << libro1.MostrarDatos() << endl;
			cout << libro1.PrestarLibro() << endl;
			break;

		case 3:
			cout << "\nDevolver el libro: \n" << libro1.MostrarDatos() << endl;
			cout << libro1.DevolverLibro() << endl;
			break;

		case 4:
			cout << libro1.Disponibilidad() << endl;
			break;

		case 5:
			cout << "Adios :)" << endl;
			break;
		}

		while(o > 5) {
			cout << "\nPorfavor digite una de las opciones que se le proporciona: \n" << endl;
			break;
		}

	} while (o != 5);

	return 0;
}


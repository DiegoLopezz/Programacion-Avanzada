#ifndef CLASSLIBRO_H
#define CLASSLIBRO_H

#include <string>


using namespace std;

class Libro {

private:
	string titulo, autor, anioPublicacion, numPaginas;
	bool estadoLibro = true;

public:
	Libro(string ti, string au, string anio, string num, bool estado);
	string PrestarLibro();
	string DevolverLibro();
	string MostrarDatos();
	string Disponibilidad();
};

#endif // !CLASSLIBRO_H

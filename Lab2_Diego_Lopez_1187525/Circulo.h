#ifndef CIRCULO_H
#define CIRCULO_H

#include <string>

class Circulo {

private :
	float const pi = 3.14159;

public:
	float radio;

 Circulo(float r);

	float ObtenerPerimetro();
	float ObtenerArea();
	float ObtenerVolumen();

};

#endif // !Circulo

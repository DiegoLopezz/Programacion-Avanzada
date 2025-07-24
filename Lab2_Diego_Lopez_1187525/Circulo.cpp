#include <iostream>
#include "pch.h"
#include "Circulo.h"
#include "cmath"

using namespace std;
	
Circulo::Circulo(float r) {
	
	radio = r;
}

float Circulo::ObtenerArea() {

	float area = pi * pow(radio, 2);
	return area;

}

float Circulo::ObtenerPerimetro() {

	float perimetro = 2 * pi * radio;
	return perimetro;

}

float Circulo::ObtenerVolumen() {

	float volumen = (4 * pi * pow(radio, 3)) / 3;
	return volumen;
}



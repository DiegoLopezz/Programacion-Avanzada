#include <iostream>
#include "Mascota.h"
#include "pch.h"

using namespace std;

int main() {
	
	Mascota mascota1("perro", "a", "a", "a", "a");
	cout << "Informacion de la mascota: " << mascota1.ObtenerEspecie() << mascota1.ObtenerFechaNacimiento() << endl;
	
	return 0;
}
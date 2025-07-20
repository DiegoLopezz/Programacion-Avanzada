#ifndef MASCOTA_H
#define MASCOTA_H
#include <string>

using namespace std;

class Mascota {
public:
	string ultimaVisitaVet;
	bool vacunado = false;
	string especie;
	string nombreMascota;
	string fechaNac;
	string nombreDuenio;
	string numDuenio;
	string nuevaFecha;


	Mascota(string e, string nM, string fN, string fUC, string noD, string numD);
		
	string ObtenerEspecie();
	string ObtenerNombre();
	string ObtenerFechaNacimiento();
	string ObtenerFechaUltimaCita();
	string ObtenerNombreDuenio();
	string ObtenerTelefono();
	string MarcarCitaRealizada();
	bool EstaVacunado();
	bool Vacunar();
	string VerificarProximaCita();
};
#endif // !MASCOTA_H


#include <iostream>
#include "pch.h"
#include "Mascota.h"
#include <string>
#include <ctime>

using namespace std;


Mascota::Mascota(string e, string nM, string fN, string fUC, string noD, string numD) {


	especie = e;
	nombreMascota = nM;
	fechaNac = fN;
	nombreDuenio = noD;
	numDuenio = numD;
	ultimaVisitaVet = fUC;
}

string Mascota::ObtenerEspecie() {
	return especie;
}

string Mascota::ObtenerNombre() {
	return nombreMascota;
}

string Mascota::ObtenerFechaNacimiento() {
	return fechaNac;
}

string Mascota::ObtenerFechaUltimaCita() {
	return ultimaVisitaVet;
}

string Mascota::ObtenerNombreDuenio() {
	return nombreDuenio;
}

string Mascota::ObtenerTelefono() {
	return numDuenio;
}

string Mascota::MarcarCitaRealizada() {

	cout << "Ingrese la nueva fecha de la ultima cita realizada (formato dd/mm/aaaa): " << endl;
	cin >> nuevaFecha;
	return nuevaFecha;
}
bool Mascota::EstaVacunado() {
	if (vacunado = false) {
		cout << "La mascota no esta vacunada." << endl;
		return false;
	}
	else {
		cout << "La mascota ya esta vacunada." << endl;
		return true;
	}
}
bool Mascota::Vacunar() {
	vacunado = true;
	cout << "La mascota ha sido vacunada." << endl;
	return true;
}
string Mascota::VerificarProximaCita() {
	string fecha = nuevaFecha != "" ? nuevaFecha : ultimaVisitaVet;

	if (fecha == "") {
		cout << "\nLa mascota no ha tenido ninguna cita.\nSe debe agendar una cita." << endl;
		cout << "Contacto: " << nombreDuenio << ", Tel: " << numDuenio << endl;
		return "No hay citas registradas";
	}

	tm t = {};
	t.tm_mday = stoi(fecha.substr(0, 2));
	t.tm_mon = stoi(fecha.substr(3, 2)) - 1;
	t.tm_year = stoi(fecha.substr(6, 4)) - 1900; //Este apartado fue hecho con guías de youtube y guías de copilot :')
	time_t fechaCita = mktime(&t);

	time_t ahora = time(nullptr);

	double dias = difftime(ahora, fechaCita) / 86400;

	if (dias > 30) {
		cout << "\nHan pasado " << (int)dias << " días desde la última cita (" << fecha << ").\n";
		cout << "Se debe agendar una nueva cita.\n";
		cout << "Contacto: " << nombreDuenio << ", Tel: " << numDuenio << endl;
	}
	else {
		cout << "\nLa última cita fue el " << fecha << " (" << (int)dias << " días atrás)." << endl;
	}
	return "La ultima cita fue reciente";
}
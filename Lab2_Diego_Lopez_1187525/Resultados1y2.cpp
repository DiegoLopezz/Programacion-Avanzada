#include <iostream>  
#include "Circulo.h"  
#include "Mascota.h"
#include "pch.h"  
#include <string>

using namespace std;  

int main() {  

    Circulo circulo1(30.5);  

    cout << "El area del circulo es de: " << circulo1.ObtenerArea() << " Unidades cuadradas" << endl;
    cout << "\nEl perimetro del circulo es de: " << circulo1.ObtenerPerimetro() << " Unidades" << endl;
    cout << "\nEl volumen del circulo es de: " << circulo1.ObtenerVolumen() << " Unidades cubicas" << endl;
    cout << "\n-------------------------- Fin del Programa del Circulo-------------------------------------" << endl;
    
    int o;
    Mascota mascota1("Perro", "Jake", "25/12/2019", "05/03/2025", "Diego", "7777777");
    cout << "\nInformacion de la mascota: " <<"\nEspecie: " << mascota1.ObtenerEspecie() 
        <<"\nNombre de la Mascota: " << mascota1.ObtenerNombre() <<"\nFecha de Nacimiento: " << mascota1.ObtenerFechaNacimiento() 
        <<"\nUtima Visita al Veterinario: " << mascota1.ObtenerFechaUltimaCita() << "\nNombre del Dueño: " << mascota1.ObtenerNombreDuenio() << "\nNumero del Dueño: " << mascota1.ObtenerTelefono() << endl;

    do {
        cout << "\nOpciones: \nIngrese 1 para registrar una nueva cita. \nIngrese 2 para verificar si la mascota esta vacunada. \nIngrese 3 para vacunar a la mascota. \nIngrese 4 para verificar la proxima cita. \nIngrese 5 para salir." << endl;
        cin >> o;

        switch (o) {
        case 1:
            mascota1.MarcarCitaRealizada();
            break;

        case 2:
            mascota1.EstaVacunado();
            break;

        case 3:
            cout << "\nRegistrando la mascota como vacunada." << endl;
            mascota1.Vacunar();
            break;

        case 4:
            mascota1.VerificarProximaCita();
            break;
        }
        cout << "\nInformacion de la mascota: " << "\nEspecie: " << mascota1.ObtenerEspecie()
            << "\nNombre de la Mascota: " << mascota1.ObtenerNombre() << "\nFecha de Nacimiento: " << mascota1.ObtenerFechaNacimiento()
            << "\nUtima Visita al Veterinario: " << mascota1.nuevaFecha << "\nNombre del Dueño: " << mascota1.ObtenerNombreDuenio() << "\nNumero del Dueño: " << mascota1.ObtenerTelefono() << endl;
	} while (o != 5);
    return 0;
}

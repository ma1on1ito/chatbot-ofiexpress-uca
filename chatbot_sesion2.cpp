#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre;
    string opcion;
    string empresa = "OfiExpress";

    cout << "=== Chatbot " << empresa << " v2 ===" << endl;
    cout << "Hola, soy el asistente virtual de " << empresa << "." << endl;
    cout << "Como te llamas? ";
    getline(cin, nombre);

    cout << "Hola, " << nombre << ". En que puedo ayudarte hoy?" << endl;
    cout << "Escribe: 'horario', 'servicio' o 'contacto': ";
    getline(cin, opcion);

    if (opcion == "horario") {
        cout << "Puedes comunicarte al telefono 55-1234-5678 o al correo ventas@ofiexpress.mx" << endl;
    } else if (opcion == "servicios") {
        cout << "Ofrecemos venta y reparto de articulos de oficina para PYMES." << endl;
    } else if (opcion == "contacto") {
        cout << "Nuestro horario de atencion es de lunes a viernes de 9:00 a 18:00." << endl;
    } else {
        cout << "Lo siento, aun no tengo informacion sobre ese tema." << endl;
    }

    return 0;
}

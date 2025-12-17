#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre;
    string empresa = "OfiExpres";

    cout << "=== Chatbot " << empresa << " v2 ===" << endl;
    cout << "Hola, soy el asistente virtual de " << empresa << "." << endl;
    cout << "Para comenzar, dime tu nombre: ";

    getline(cin, nombre);

    //nombre = "cliente";

    cout << "Mucho gusto, " << "Cliente" << nombre << ". Gracias por contactar a "
         << empresa << "." << endl;
    cout << "En esta version ya puedes consultar pedidos e informacion real." << endl;

    return 0;
}
